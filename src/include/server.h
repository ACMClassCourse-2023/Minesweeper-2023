#ifndef SERVER_H
#define SERVER_H

#include <iostream>

/**
 * @brief The definition of function ReadMap()
 *
 * @details This function is designed to read the initial map from stdin. For example, if there is a 3 * 3 map in which
 * mines are located at (0, 1) and (1, 2) (0-based), the stdin would be
 *     3 3
 *     .@.
 *     ...
 *     ..@
 * where @ stands for a mine block and . stands for a normal block. After executing this function, your game map would
 * be initialized, with all the blocks unvisited.
 *
 * @param is_initializing (for A-class only) This parameter would always be true and unused in basic test cases. That
 * means you don't need to read the contents after here. If you're trying advanced mission, this value would be false
 * when you (a.k.a. the client) call it. Since the client (or player) can only get the limited information of the game
 * map, so if there is a 3 * 3 map as above and only the block (2, 0) has been visited, the stdin would be
 *     ...
       12.
       01.
 * Therefore, we recommend you to use this structure to read the map if you're trying the advanced mission
 *     void ReadMap(bool is_initializing) {
 *       if (!is_initializing) {
 *         // read the whole information about the game map as server
 *       } else {
 *         // read the limited information about the game map as client
 *       }
 *     }
 */
void ReadMap(bool is_initializing = true);

/**
 * @brief The definition of function VisitBlock(int, int)
 *
 * @details This function is designed to visit a block in the game map. We take the 3 * 3 game map above as an example.
 * At the beginning, if you call VisitBlock(0, 0), the return value would be 0 (game continues), and the game map would
 * be
 *     1..
 *     ...
 *     ...
 * If you call VisitBlock(0, 1) after that, the return value would be -1 (game ends and the players loses) , and the
 * game map would be
 *     1@.
 *     ...
 *     ...
 * If you call VisitBlock(0, 2), VisitBlock(2, 0), VisitBlock(1, 2) instead, the return value of the last operation
 * would be 1 (game ends and the player wins), and the game map would be
 *    1.1
 *    122
 *    01.
 *
 * @param pos_x The x-coordinate of the block to be visited.
 * @param pos_y The y-coordinate of the block to be visited.
 * @return int
 *    0  if the game continues after visit that block, or that block has already been visited before.
 *    1  if the game ends and the player wins.
 *    -1 if the game ends and the player loses.
 */
auto VisitBlock(unsigned int pos_x, unsigned int pos_y) -> int;

/**
 * @brief The definition of function PrintMap()
 *
 * @details This function is designed to print the game map to stdout. We take the 3 * 3 game map above as an example.
 * At the beginning, if you call PrintMap(), the stdout would be
 *    ...
 *    ...
 *    ...
 * If you call VisitBlock(2, 0) and PrintMap() after that, the stdout would be
 *    ...
 *    12.
 *    01.
 * If you call VisitBlock(0, 1) and PrintMap() after that, the stdout would be
 *    .@.
 *    12.
 *    01.
 */
void PrintMap();

/**
 * @brief The definition of function ExitGame()
 *
 * @details This function is designed to exit the game. It outputs two integers, visit_count and step_count,
 * representing the number of blocks visited and the number of steps taken respectively.
 */
void ExitGame();

/**
 * @brief The definition of function Execute(unsigned, unsigned), ReadMapFromString(string) and PrintMapToString(string)
 * (for A-class only)
 *
 * @details You can use this function to read the game map when playing the client's (or player) role. If you don't
 * understand the use of these functions, please ask the TAs for help. Notice that you shouldn't modify the
 * implementation of them. If you must, please ask the TA in advance.
 */
auto Execute(unsigned int pos_x, unsigned int pos_y) -> int;
void ReadMapFromString(const std::string &input);
void PrintMapToString(std::string &output);

#endif
