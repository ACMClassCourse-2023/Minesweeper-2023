/* Copyright (c) 2023 ACM Class Course
 * This software is distributed under the MIT License.
 *
 * This file (server.cpp) is an implementation for server.h. When running the basic test cases, the main file (main.cpp)
 * would call the functions in this file to perform the server's job in default structure.
 */

#include "server.h"

#include <iostream>
#include <sstream>
#include <string>

/*
 * You may need to define some global variables for the information of the game map here.
 * Although we don't encourage to uss global variables in real cpp projects, you may have to use them because the use of
 * class is not taught yet. However, if you are member of A-class or have learnt the use of cpp class, member functions,
 * etc., you're free to modify this structure.
 */

/**
 * @brief The implementation of function ReadMap
 * @details Implement me!
 * @param is_initializing leave it unused unless you're
 */
void ReadMap(bool is_initializing) {
  // TODO (student)
}

auto VisitBlock(unsigned int pos_x, unsigned int pos_y) -> int {
  return 0;
}

/**
 * @brief The implementation of function PrintMap
 * @details Implement me!
 */
void PrintMap() {
  // TODO (student)
}

/**
 * @brief The implementation of function Execute
 * @details Use it only when trying advanced mission. Do NOT modify it before discussing with TA.
 * @param pos_x 
 * @param pos_y 
 */
auto Execute(unsigned int pos_x, unsigned int pos_y) -> int {
  std::string str;
  int result = VisitBlock(pos_x, pos_y);
  PrintMapToString(str);
  ReadMapFromString(str);
  return result;
}

/**
 * @brief The implementation of function ReadMapFromString
 * @details Use it only when trying advanced mission. Do NOT modify it before discussing with TA.
 * @param input 
 */
void ReadMapFromString(const std::string &input) {
  std::istringstream iss(input);
  std::streambuf *oldInputBuffer = std::cin.rdbuf();
  ReadMap(false);
  std::cin.rdbuf(oldInputBuffer);
}

/**
 * @brief The implementation of function PrintMapToString
 * @details Use it only when trying advanced mission. Do NOT modify it before discussing with TA.
 * @param output 
 */
void PrintMapToString(std::string &output) {
  std::ostringstream oss;
  std::streambuf *oldOutputBuffer = std::cout.rdbuf();
  PrintMap();
  std::cout.rdbuf(oldOutputBuffer);
  output = oss.str();
}