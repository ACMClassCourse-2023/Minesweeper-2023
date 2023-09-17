#ifndef SERVER_H
#define SERVER_H

#include <iostream>

void ReadMap();
void ReadMapFromString(const std::string &input);

auto VisitBlock(unsigned pos_x, unsigned pos_y) -> int;

void PrintMap();
void PrintMapToString(std::string &output);

void ExitGame();

#endif
