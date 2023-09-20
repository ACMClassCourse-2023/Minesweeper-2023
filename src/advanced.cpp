#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

#include "client.h"
#include "server.h"

/**
 * @brief The implementation of function Execute
 * @details Use it only when trying advanced task. Do NOT modify it before discussing with TA.
 */
void Execute(unsigned int row, unsigned int column) {
  std::string str;
  VisitBlock(row, column);
  if (game_state != 0) {
    ExitGame();
  }
  std::ostringstream oss;
  std::streambuf *old_output_buffer = std::cout.rdbuf();
  std::cout.rdbuf(oss.rdbuf());
  // Here, we redirect the output stream to the string stream.
  // By this way the output of PrintMap() would be stored in the string.
  // If you do not understand, you can try to compare it with freopen, which redirect the output stream to a file.
  PrintMap();
  std::cout.rdbuf(old_output_buffer);  // Restore the output buffer
  str = oss.str();                     // Read the output
  std::istringstream iss(str);         // Redirect the input to the string, which stores the output recently
  std::streambuf *old_input_buffer = std::cin.rdbuf();
  ReadMap();
  std::cin.rdbuf(old_input_buffer);
}

int main() {
  InitMap();
  std::cout << rows << " " << columns << std::endl;
  InitGame();
  while (true) {
    Decide(); // Exit() will be called in this function
  }
}