#include "server.h"

auto main() -> int {
  ReadMap();
  while (true) {
    unsigned pos_x;
    unsigned pos_y;
    std::cin >> pos_x >> pos_y;
    int result = VisitBlock(pos_x, pos_y);
    PrintMap();
    if (result != 0) {
      break;
    }
  }
  ExitGame();
  return 0;
}