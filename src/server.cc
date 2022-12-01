#include "server.h"
#include <sys/socket.h>

namespace server {
  /**
   * clear up
   */
  Server::~Server() {
  };

  void Server::start() {
    int sock_fd = socket(AF_INET, SOCK_STREAM, 0);
  };
}
