#include <iostream>
#include "ev.h"

#include <unistd.h>
#include <sys/types.h>

static ev_io io_watcher;

static void io_callback(EV_P_ ev_io *w, int revents) {
  std::cout << "stdin ready with evts " << revents << std::endl;

#define BUF_SIZE 64
  char buf[BUF_SIZE];
  ssize_t rlt = read(w->fd, buf, BUF_SIZE);
  if (rlt > 0) {
    std::cout << "buf: " << buf << std::endl;
  }

  ev_io_stop(EV_A_ w);
  ev_break(EV_A_ EVBREAK_ALL);
}

int main(int argc, char **argv) {
  std::cout << "libev<" << ev_version_major() << "." << ev_version_minor() << ">" << std::endl;

  /*struct ev_loop *loop = EV_DEFAULT;
  ev_io_init(&io_watcher, io_callback, 0, EV_READ);
  ev_io_start(loop, &io_watcher);
  ev_run(loop, 0);*/
  return 0;
}
