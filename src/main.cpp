#include <iostream>

#include "server.h"

int main() {
  InitMap();
  while (true) {
    unsigned pos_x;
    unsigned pos_y;
    std::cin >> pos_x >> pos_y;
    int result = VisitBlock(pos_x, pos_y);
    PrintMap(result);
    if (result != 0) {
      ExitGame(result);
      break;
    }
  }
  return 0;
}
