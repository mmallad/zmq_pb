//Dipak Malla
#include "../../includes/server.h"

using namespace zmq_pb;
worker::worker(context_t &context, int sock_type, string path):context_(context),
    worker_(context_, sock_type), path_(path){

}
void worker::doWork(){
    this->worker_.connect("inproc://server");
    try{
        message_t request;
        worker_.recv(&request);
        char *buffer = (char *)request.data();
        size_t bufferSize = request.size();
        //First request for meta information
        FileMeta fileMeta;
        fileMeta.ParseFromArray(buffer, bufferSize);
        clog << "Name : " << fileMeta.name() << " Size : " << fileMeta.size() << endl;
        char fileName[1024];
        snprintf(fileName, 1024, "%s/%s",this->path_.c_str(),fileMeta.name().c_str());

        File fl;
        while(request.more()){
            worker_.recv(&request);
            buffer = (char *)request.data();
            size_t bufferSize = request.size();
            fl.ParseFromArray(buffer,bufferSize);
            if(fl.ismore()){
                const string fData = fl.buffer();
                fstream output(fileName, ios::out | ios::app | ios::binary);
                output.write(fData.c_str(), fl.buffersize());
                output.close();
                clog << "Written Size : " << fl.buffersize() << endl;
            }
        }

        //Send Reply
        message_t reply (3);
        memcpy((void *)reply.data(), "Ok", 3);
        worker_.send(reply);
        clog << "All data written to " << fileName << endl;
    }catch(exception &ex){
        cerr << ex.what() << endl;
    }
}
server::server():context(1), serverFrontend(context, ZMQ_ROUTER),
    serverBackend(context, ZMQ_DEALER){

}
void server::run(int threadCount, string path, string url){
    this->serverFrontend.bind(url.c_str());
    this->serverBackend.bind("inproc://server");
    vector<worker *> work;
    vector<thread *> worker_thread;
    for(int i = 0; i < threadCount; i++){
        work.push_back(new worker(this->context, ZMQ_REP, path));
        worker_thread.push_back(new thread(bind(&worker::doWork,work[i])));
        worker_thread[i]->detach();
    }
    clog << "Server started." << endl;
    proxy(this->serverFrontend, this->serverBackend, nullptr);

    for(int i = 0; i < threadCount; i++){
        delete work[i];
        delete worker_thread[i];
    }
}
int main(int argc, char *argv[]){
    if(argc < 4){
        cerr << "Parameter missing." << endl;
        clog << "Usage : server <thred pool size> <path> <url>" << endl << "Example : server 5 ~/Desktop tcp://*:4444" << endl;
        return -1;
    }
    //Initilize server.
    server ser;
    ser.run(atoi(argv[1]), argv[2], argv[3]);
    return 0;
}
