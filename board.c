#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "types.h"
#include "board.h"
#include "player.h"
#include "others.h"






Square square[MAX_SQUARES] = {

    {0, "Go", GO},
    {1, "Pettah", PROPERTY},
    {2, "Community Development Fund", EVENT},
    {3, "Maradana", PROPERTY},
    {4, "Income Tax", TAX},
    {5, "Colombo Fort Railway Station", RAILWAY},
    {6, "Bambalapitiya", PROPERTY},
    {7, "National Event Card", EVENT},
    {8, "Wellawatte", PROPERTY},
    {9, "Mount Lavinia", PROPERTY},
    {10, "Jail/Jail Visit", JAIL},
    {11, "Nugegoda", PROPERTY},
    {12, "Ceylon Electricity Board", UTILITY},
    {13, "Maharagama", PROPERTY},
    {14, "Kottawa", PROPERTY},
    {15, "Kandy Railway Station", RAILWAY},
    {16, "Negombo", PROPERTY },
    {17, "Sri Lanka Insurance", INSURANCE},
    {18, "Katunayake", PROPERTY},
    {19, "Ja-Ela", PROPERTY},
    {20, "Free Parking", FREE_PARKING},
    {21, "Kandy City", PROPERTY},
    {22, "National Event Card", EVENT},
    {23, "Peradeniya", PROPERTY},
    {24, "Katugastota", PROPERTY},
    {25, "Galle Railway Station", RAILWAY},
    {26, "Galle Fort", PROPERTY},
    {27, "Unawatuna", PROPERTY},
    {28, "National Water Supply and Drainage Board", UTILITY},
    {29, "Hikkaduwa", PROPERTY},
    {30, "Go to Jail", GO_TO_JAIL},
    {31, "Jaffna Town", PROPERTY},
    {32, "Nallur", PROPERTY},
    {33, "Ceylinco Insurance", INSURANCE},
    {34, "Trincomalee", PROPERTY},
    {35, "Jaffna Railway Station", RAILWAY},
    {36, "National Event Card", EVENT},
    {37, "Nuwara Eliya", PROPERTY},
    {38, "Bank of Ceylon", BANK},
    {39, "Galle Face", PROPERTY}

    };

Property_Value property_values[8] = {
        {BROWN, 750, 500, 2000},
        {LIGHT_BLUE, 1250, 750, 3000},
        {PINK, 1750, 1000, 4000},
        {ORANGE, 2250, 1250, 5000},
        {RED, 2750, 1500, 6000},
        {YELLOW, 3250, 2000, 8000},
        {GREEN, 4000, 2500, 10000},
        {DARK_BLUE, 5000, 3000, 12000}
    };
    
Property properties[22] = {
    {1, "Pettah", BROWN, 1500, 100, 750, 500, 2000, 0, 0, 0, 0, 0, 0},
    {3, "Maradana", BROWN, 1800, 120, 750, 500, 2000, 0, 0, 0, 0, 0, 0},
    {6, "Bambalapitiya", LIGHT_BLUE, 2500, 180, 1250, 750, 3000, 0, 0, 0, 0, 0, 0},
    {8, "Wellawatte", LIGHT_BLUE, 2700, 200, 1250, 750, 3000, 0, 0, 0, 0, 0, 0},
    {9, "Mount Lavinia", LIGHT_BLUE, 3000, 220, 1250, 750, 3000, 0, 0, 0, 0, 0, 0},
    {11, "Nugegoda", PINK, 3500, 250, 1750, 1000, 4000, 0, 0, 0, 0, 0, 0},
    {13, "Maharagama", PINK, 3800, 270, 1750, 1000, 4000, 0, 0, 0, 0, 0, 0},
    {14, "Kottawa", PINK, 4000, 300, 1750, 1000, 4000, 0, 0, 0, 0, 0, 0},
    {16, "Negombo", ORANGE, 4500, 350, 2250, 1250, 5000, 0, 0, 0, 0, 0, 0},
    {18,"Katunayake", ORANGE ,4800 ,370 ,2250 ,1250 ,5000 ,0 ,0 ,0 ,0 ,0 ,0 },
    {19,"Ja-Ela", ORANGE ,50000 ,400 ,2250,12500 ,50000 ,0 ,0 ,0 ,0 ,0 ,0 },
    {23, "Peradeniya", RED, 5800, 480, 2750, 1500, 6000, 0, 0, 0, 0, 0, 0},
    {24, "Katugastota", RED, 6000, 500, 2750, 1500, 6000, 0, 0, 0, 0, 0, 0},
    {26, "Galle Fort", YELLOW, 6500, 600, 3250, 2000, 8000, 0, 0, 0, 0, 0, 0},
    {27, "Unawatuna", YELLOW, 6800, 620, 3250, 2000, 8000, 0, 0, 0, 0, 0, 0},
    {29, "Hikkaduwa", YELLOW, 7000, 650, 3250, 2000, 8000, 0, 0, 0, 0, 0, 0},
    {31, "Jaffna Town", GREEN, 8000, 750, 4000, 2500, 10000, 0, 0, 0, 0, 0, 0},
    {32, "Nallur", GREEN, 8300, 780, 4000, 2500, 10000, 0, 0, 0, 0, 0, 0},
    {34, "Trincomalee", GREEN, 8500, 800, 4000, 2500, 10000, 0, 0, 0, 0, 0, 0},
    {37, "Nuwara Eliya", DARK_BLUE, 10000, 1000, 5000, 3000, 12000, 0, 0, 0, 0, 0, 0},
    {39, "Galle Face", DARK_BLUE, 12000, 1200, 5000, 3000, 12000, 0, 0, 0, 0, 0, 0}
    };

Railway railways[4] = {
        {5, "Colombo Fort Railway Station", 1500, 750, 0, 0},
        {15, "Kandy Railway Station", 1500, 750, 0, 0},
        {25, "Galle Railway Station", 1500, 750, 0, 0},
        {35, "Jaffna Railway Station", 1500, 750, 0, 0}
    };

Utility utilities[2] = {
        {12, "Ceylon Electricity Board", 1500, 750, 0, 0},
        {28, "National Water Supply and Drainage Board", 1500, 750, 0, 0}
    };

//Wrong mortgage value for utilities and railways. Need to fix it.


Dice_Value roll_dice()
{
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    int sum = dice1 + dice2;
    Dice_Value values = {dice1, dice2, sum};
    return values;
}


int is_double(Dice_Value dice)
{
    return (dice.dice1 == dice.dice2);
}

int get_turn_order2(int history[][MAX_NO_OF_REPEATING_ROLLS], int len_history1, int len_history2)
{
   int id = 0;                      //Initialize player id list
   int player_id[len_history1];
   while (id < len_history1)
   {
    player_id[id] = id;
    id++;
   }

    long int player_marks[len_history1];            //inizialize player_mark with all elements = 0
    for (int mark = 0; mark < len_history1; mark++) 
    {
        player_marks[mark] = 0;
    }


    for (int player = 0; player < len_history1; player++)       //Giving marks for each dice roll round for each player
    {
        int multiplier = (int)pow(12,len_history2);

        for (int roll = 0; roll < len_history2; roll++)
        {
            if (history[player][roll] != 0)
            {
                player_marks[player] += history[player][roll]*multiplier;
                
            }
            multiplier/=12;
        }
    }
    
    long int temp_mark;                     //Sort player_id array according to player_marks' descending 
    int temp_id;
    for (int i = 0; i < len_history1; i++)
    {
        for (int j =  i+1; j <len_history1; j++)
        {
            if (player_marks[i] < player_marks[j])
            {
                temp_mark = player_marks[i];
                temp_id = player_id[i];
                player_marks[i] = player_marks[j];
                player_id[i] = player_id[j];
                player_marks[j] = temp_mark;
                player_id[j] = temp_id;
            }
            
        }
    }

    for (int i = 0; i < len_history1; i++)      //Assign player_turn value for each player
    {   
        players[player_id[i]].player_turn = i;
    }
    printf("%s will begin the game!\n\n", players[player_id[0]].player_name);
    printf("Turn order:\n");
    
    for (int i = 0; i < len_history1; i++)
    {   
        printf("%s\n",players[player_id[i]].player_name);
    }

}

int get_turn_order(int player_list[], int len)
{   
    static int roll_count = 0;
    static int roll_sum_history[NO_OF_PLAYERS][MAX_NO_OF_REPEATING_ROLLS]; //Maximum number of repeating rolls is MAX_NO_OF_REPEATING_ROLLS
    
    if (roll_count == 0){
    for (int i = 0; i < len; i++)                         //Assign all values in roll_history to 0
    {
        for (int j = 0; j < MAX_NO_OF_REPEATING_ROLLS; j++)
        {
            roll_sum_history[i][j] = 0;
        }
    }}

    if (len == 0)
    {   get_turn_order2(roll_sum_history,NO_OF_PLAYERS,MAX_NO_OF_REPEATING_ROLLS);
        return 0;
    }
    
    for (int i = 0; i < len; i++)
    {
        if (player_list[i] != -1){
            break;}
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        players[player_list[i]].last_dice_roll = roll_dice();   
        roll_sum_history[player_list[i]][roll_count] = players[player_list[i]].last_dice_roll.sum ; // record sum history of each player
    }
    roll_count++;

    for (int i = 0; i < len; i++) //print random sum (For testing purpose only)
    {
        printf("%s rolls: %d\n",players[player_list[i]].player_name, players[player_list[i]].last_dice_roll.sum);
    }
    printf("\n");

    int equal_players[len]; //Initialize equal_players[] with all elements = -1
    for (int i = 0; i < len; i++)
    {
        equal_players[i] = -1;
    }
    
    int count_eq_players = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if ( (players[player_list[i]].last_dice_roll.sum == players[player_list[j]].last_dice_roll.sum) )
            {
                if (search(equal_players,len, player_list[i]) == -1)
                {
                    equal_players[count_eq_players] = player_list[i];
                    count_eq_players++;
                }
                if (search(equal_players,len, player_list[j]) == -1)
                {
                    equal_players[count_eq_players] = player_list[j];
                    count_eq_players++;
                }
            }

        }
    }
    
    int equal_players_new[count_eq_players];
    for (int i = 0; i < count_eq_players; i++)
    {
        equal_players_new[i] = equal_players[i];
    }
    

    for (int i = 0; i < LEN(equal_players); i++) //print equal priority players
    {
        if (equal_players[i] != -1)
        {
            printf("%s\n", players[equal_players[i]].player_name);
        }
    }
    if (equal_players[0] != -1)
    {
        printf("\t\thas the same values.\nReroll:\n");
    }

    get_turn_order(equal_players_new,LEN(equal_players_new));





    




    
}