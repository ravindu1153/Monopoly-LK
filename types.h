#ifndef TYPES
#define TYPES


enum SquareTypes {
    GO,
    PROPERTY,
    EVENT,
    TAX,
    RAILWAY,
    JAIL,
    UTILITY,
    INSURANCE,
    FREE_PARKING,
    GO_TO_JAIL,
    BANK
};

typedef struct Square {
    int square_no;
    char *square_name;
    enum SquareTypes square_type;
} Square;


enum PropertyColors {
    BROWN,
    LIGHT_BLUE,
    PINK,
    ORANGE,
    RED,
    YELLOW,
    GREEN,
    DARK_BLUE
};


typedef struct Property_Value {
    enum PropertyColors property_color;
    int mortgage_value;
    int house_cost;
    int hotel_cost;
} Property_Value;


typedef struct Property {
    int square_no;
    char *property_name;
    enum PropertyColors property_color;
    int purchase_price;
    int base_rent;
    int mortgage_value;
    int house_cost;
    int hotel_cost;
    int num_houses;
    int num_hotels;
    int current_owner;
    int mortgage_status;
    int insurance_status;
    int property_age;
} Property;

enum PlayerID {P1,P2,P3,P4};

typedef struct Player {
    enum PlayerID player_id;
    int player_behavior;
    char *player_name;
    int player_position;
    int player_balance;
    int player_properties[40];
    int num_properties;
    int is_in_jail;
    int jail_turns;
    int is_bankrupt;
    int railway_count;
    int utility_count;

} Player;

typedef struct Dice_Value {
    int dice1;
    int dice2;
} Dice_Value;



#endif