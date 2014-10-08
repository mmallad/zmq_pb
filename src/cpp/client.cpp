//Dipak Malla
#include <iostream>
#include <zmq.hpp>
#include <string>
#include <unistd.h>
#include <fcntl.h>
#include "../../pb/zmq_pb.pb.h"


using namespace std;
using namespace zmq;
using namespace zmq_pb;

int main(int argc, char *argv[]){
    if(argc < 3){
        cerr << "Parameter missing." << endl;
        clog << "Usage :  client <url:port> <file name>" << endl;
        return -1;
    }
    int fd = open64(argv[2], O_RDONLY);
    if(fd > 0){
        FileMeta fileMeta;
        fileMeta.set_name(argv[2]);
        fileMeta.set_size(0);
        //Send FileMeta Information
        context_t context(1);
        socket_t socket(context, ZMQ_REQ);
        socket.connect(argv[1]);
        size_t bufferSize = fileMeta.ByteSize();
        char buffer[bufferSize];
        fileMeta.SerializeToArray(buffer, bufferSize);
        message_t message(bufferSize);
        memcpy(message.data(), buffer, bufferSize);
        socket.send(message, ZMQ_SNDMORE);
        char fileBuffer[BUFSIZ];
        File fl;
        while(true){
            int readSize = read(fd, fileBuffer, 6048);
            //Now Send File
            if(readSize > 0){
                fl.set_ismore(true);
                fl.set_buffersize(readSize);
                fl.set_buffer(fileBuffer, readSize);
            }else{
                fl.set_ismore(false);
            }
            size_t bS = fl.ByteSize();
            char dataBuff[bS];
            fl.SerializeToArray(dataBuff, bS);
            message_t msg(bS);
            memcpy(msg.data(), dataBuff, bS);
            if(fl.ismore()){
                socket.send(msg, ZMQ_SNDMORE);
            }else{
                socket.send(msg);
                break;
            }
        }
        message_t reply;
        socket.recv(&reply);
        clog << "Reply : " << (char *)reply.data() << endl;
        socket.close();
        context.close();
        close(fd);
    }else{
        cerr << "Could not open file." << endl;
        return -1;
    }
}
