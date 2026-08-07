#include <stdio.h>
#include "player.h"
#include "types.h"
#include "board.h"
#include "others.h"


void print_player_names()
{
    for (int pid = 0; pid < LEN(players); pid++)
    {
        printf("Player %d : %s\n", pid+1, players[pid].player_name);
    }
    printf("\n");
}

void start_game() {
    printf("MONOPOLY-LK Simulation\n\n");
    print_player_names();
    printf("Each player begins with LKR %d\n\n",INITIAL_CASH);
    int array[]={P0,P1,P2,P3};
    get_turn_order(array,4);

}

