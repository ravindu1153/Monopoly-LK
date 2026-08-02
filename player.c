#include <stdio.h>
#include "types.h"

#define INITIAL_CASH 30000

void initialize_players(){

Player players[4] = {
    {AGGRESIVE_INVESTOR, "Player 1", 0, 0, INITIAL_CASH, {0}, 0, 0, 0, 0},
    {CONSERVATIVE_BANKER, "Player 2", 0, 0, INITIAL_CASH, {0}, 0, 0, 0, 0},
    {RISK_TAKER, "Player 3", 0, 0, INITIAL_CASH, {0}, 0, 0, 0, 0},
    {OPPORTUNISTIC_TRADER, "Player 4", 0, 0, INITIAL_CASH, {0}, 0, 0, 0, 0}
};

}

