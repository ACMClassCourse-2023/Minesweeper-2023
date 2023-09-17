#include "server.h"

#include <iostream>
#include <sstream>
#include <string>

void ReadMapFromString(const std::string &input) {
  std::istringstream iss(input);
  std::streambuf *oldInputBuffer = std::cin.rdbuf();
  ReadMap();
  std::cin.rdbuf(oldInputBuffer);
}

void PrintMapToString(std::string &output) {
  std::ostringstream oss;
  std::streambuf *oldOutputBuffer = std::cout.rdbuf();
  PrintMap();
  std::cout.rdbuf(oldOutputBuffer);
  output = oss.str();
}