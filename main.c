#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "board.h"
#include "game.h"
#include "player.h"
#include <time.h>


int main()
{ 
    srand((unsigned)time(NULL));
    start_game();
    int array[]={P0,P1,P2,P3};
    get_turn_order(array,4);
}