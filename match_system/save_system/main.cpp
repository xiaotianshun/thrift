// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "src/Save.h"
#include <bits/stdc++.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace ::save;
using namespace std;

class SaveHandler : virtual public SaveIf
{
public:
    SaveHandler()
    {
        // Your initialization goes here
    }

    int32_t save_data(const SaveInfo &msg)
    {
        // Your implementation goes here
        fstream fin("./data/save_data.txt", ios::app);
        msg.printTo(fin);
        fin << endl;
        return 0;
    }
};

int main(int argc, char **argv)
{
    int port = 7777;
    ::std::shared_ptr<SaveHandler> handler(new SaveHandler());
    ::std::shared_ptr<TProcessor> processor(new SaveProcessor(handler));
    ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
    ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
    ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

    TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
    printf("Save Run\n");
    server.serve();
    return 0;
}
