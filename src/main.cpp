#include <iostream>

#include "server.h"

int main() {
  InitMap();
  PrintMap();
  while (true) {
    unsigned pos_x;
    unsigned pos_y;
    std::cin >> pos_x >> pos_y;
    VisitBlock(pos_x, pos_y);
    PrintMap();
    if (game_state != 0) {
      ExitGame();
    }
  }
  return 0;
}
