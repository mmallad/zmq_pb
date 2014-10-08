CC = g++
PBLDD = `pkg-config --libs protobuf`
PBSRC = pb/zmq_pb.pb.cc
CPPVER = -std=c++11
CPPFLAGS = `pkg-config --cflags libzmq`
ZMQLDD = `pkg-config --libs libzmq`
all:
	$(CC) $(CPPVER) src/cpp/server.cpp $(PBSRC) $(CPPFLAGS) -o server $(ZMQLDD) $(PBLDD)
	$(CC) $(CPPVER) src/cpp/client.cpp $(PBSRC) $(CPPFLAGS) -o client $(ZMQLDD) $(PBLDD)
clean:
	rm -f server client
