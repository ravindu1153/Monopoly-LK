#include <stdio.h>
#include "types.h"
#include "player.h"




Player players[NO_OF_PLAYERS] = {
    {AGGRESIVE_INVESTOR, "Player 0_INVESTOR", 0, 0, INITIAL_CASH, {0}, 0, 0, 0, 0, 0, 0},
    {CONSERVATIVE_BANKER, "Player 1_BANKER", 0, 0, INITIAL_CASH, {0}, 0, 0, 0, 0, 0, 0 },
    {RISK_TAKER, "Player 2_RISK", 0, 0, INITIAL_CASH, {0}, 0, 0, 0, 0, 0, 0},
    {OPPORTUNISTIC_TRADER, "Player 3_TRADER", 0, 0, INITIAL_CASH, {0}, 0, 0, 0, 0, 0, 0}
};


