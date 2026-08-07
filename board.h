#ifndef BOARD_H
#define BOARD_H
#include "types.h"
#include "player.h"

#define MAX_PLAYERS 4
#define MAX_SQUARES 40
#define MAX_NO_OF_REPEATING_ROLLS 5

Dice_Value roll_dice();
int get_turn_order(int player_list[], int len);

#endif