#ifndef BOARD_H
#define BOARD_H
#include "types.h"

#define MAX_PLAYERS 4


Dice_Value roll_dice();
int get_turn_order(int player_list[], int len);

#endif