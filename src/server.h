#ifndef SERVER_
#define SERVER_

namespace server {

// server
class Server {
  public:
    Server(int port_), port(port_) {};
    ~Server();
    void start();
  private:
    int port;
};

}


#endif
