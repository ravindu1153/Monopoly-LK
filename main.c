#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "board.h"


int main()
{
    int x = roll_dice(55);
    printf("Dice value: %d\n", x);

    return 0;
}