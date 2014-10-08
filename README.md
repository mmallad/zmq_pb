zmq_pb
======
##About zmq_pb

1. This is simple exmple of zero mq and google's protocol buffer.
2. PB is used to serialize the message and zmq is used for transferring serialized message.
3. Files can be transferred using this application.
5. Both server and client part are written in c++.

##Building zmq_pb

Run the make command in project root directory.


##Dependecies
1. zmq library.
2. Protocol Buffer.


##Example
 ```shell
    Usage : server <thred pool size> <path> <url>
            client <url:port> <file name>
    server 5 ~/Desktop tcp://*:4444
    client tcp://localhost:4444 f.mp4
```
