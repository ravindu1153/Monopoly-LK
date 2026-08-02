#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "types.h"


void initialize_board()
{

    const Square square[40] = {

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
}


void initialize_properties()

{ 
    const Property_Value property_values[8] = {
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
    {1, "Pettah", BROWN, 1500, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, "Maradana", BROWN, 1800, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {6, "Bambalapitiya", LIGHT_BLUE, 2500, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {8, "Wellawatte", LIGHT_BLUE, 2700, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {9, "Mount Lavinia", LIGHT_BLUE, 3000, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {11, "Nugegoda", PINK, 3500, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {13, "Maharagama", PINK, 3800, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {14, "Kottawa", PINK, 4000, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {16, "Negombo", ORANGE, 4500, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {18, "Katunayake", ORANGE, 4700, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {19, "Ja-Ela", ORANGE, 5000, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {21, "Kandy City", RED, 5500, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {23, "Peradeniya", RED, 5800, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {24, "Katugastota", RED, 6000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {26, "Galle Fort", YELLOW, 6500, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {27, "Unawatuna", YELLOW, 6800, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {29, "Hikkaduwa", YELLOW, 7000, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {31, "Jaffna Town", GREEN, 8000, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {32, "Nallur", GREEN, 8300, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {34, "Trincomalee", GREEN, 8500, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {37, "Nuwara Eliya", DARK_BLUE, 10000, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {39, "Galle Face", DARK_BLUE, 12000, 1200, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    for (int i = 0; i < 22; i++)            //Assign properties' mortgage values, house_cost, hotel_cost using property values[]
    {
        properties[i].mortgage_value = property_values[properties[i].property_color].mortgage_value;
        properties[i].house_cost = property_values[properties[i].property_color].house_cost;
        properties[i].hotel_cost = property_values[properties[i].property_color].hotel_cost;
    };
}

Dice_Value roll_dice()
{
    srand(time(NULL));
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    return (Dice_Value){dice1, dice2};
}

int is_double(Dice_Value dice)
{
    return (dice.dice1 == dice.dice2);
}

void initialize_railways()
{
    Railway railways[4] = {
        {5, "Colombo Fort Railway Station", 4000, 2000, 0, 0},
        {15, "Kandy Railway Station", 4000, 2000, 0, 0},
        {25, "Galle Railway Station", 4000, 2000, 0, 0},
        {35, "Jaffna Railway Station", 4000, 2000, 0, 0}
    };
}
void initialize_utilities()
{
    Utility utilities[2] = {
        {12, "Ceylon Electricity Board", 3000, 1500, 0, 0},
        {28, "National Water Supply and Drainage Board", 3000, 1500, 0, 0}
    };
}

//Wrong mortgage value for utilities and railways. Need to fix it.