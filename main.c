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
    
}