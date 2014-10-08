//Dipak Malla
#ifndef SERVER_H
#define SERVER_H
#include <vector>
#include <thread>
#include <functional>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <stdlib.h>
#include <string>
#include <zmq.hpp>
#include "../pb/zmq_pb.pb.h"

using namespace zmq;
using namespace std;
namespace zmq_pb {
    class worker;
    class server;
}
class zmq_pb::worker{
public:
    worker(context_t &context, int sock_type, string path);
    void doWork();
private:
    context_t &context_;
    socket_t worker_;
    string path_;
};

class zmq_pb::server{
public:
    server();
    void run(int, string, string);
private:
    context_t context;
    socket_t serverFrontend;
    socket_t serverBackend;
};

#endif // SERVER_H
