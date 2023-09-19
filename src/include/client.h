#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <utility>

extern int rows;     // The count of rows of the game map
extern int columns;  // The count of columns of the game map

/**
 * @brief The definition of function Execute(int, int)
 *
 * @details This function is designed to take a step when player the client's (or player's) role, and the implementation
 * of it has been finished by TA. (I hope my comments in code would be easy to understand T_T) If you do not understand
 * the contents, please ask TA for help immediately!!!
 *
 * @param row The row coordinate (0-based) of the block to be visited.
 * @param column The column coordinate (0-based) of the block to be visited.
 * @return int The same as the return value of VisitBlock().
 */
int Execute(unsigned int row, unsigned int column);

/**
 * @brief The definition of function InitGame()
 *
 * @details This function is designed to initialize the game. It should be called at the beginning of the game, which
 * will read the scale of the game map and the first step taken by the server (see README).
 */
void InitGame() {
  int first_row, first_column;
  std::cin >> first_row >> first_column;
  Execute(first_row, first_column);
}

/**
 * @brief The definition of function ReadMap()
 *
 * @details This function is designed to read the game map from stdin when playing the client's (or player's) role.
 * Since the client (or player) can only get the limited information of the game map, so if there is a 3 * 3 map as
 * above and only the block (2, 0) has been visited, the stdin would be
 *     ...
 *     12.
 *     01.
 */
void ReadMap() {
  // TODO (student): Implement me!
}

/**
 * @brief The definition of function Decide()
 *
 * @details This function is designed to decide the next step when playing the client's (or player's) role. Open up your
 * mind and make your decision here!
 *
 * @return std::pair<int, int>
 */
std::pair<int, int> Decide() {
  // TODO (student): Implement me!
  return std::make_pair(0, 0);
}

#endif