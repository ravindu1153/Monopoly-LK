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

extern Square square[40];


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

extern Property_Value property_values[8];

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
extern Property properties[22];

enum PlayerBehavior {AGGRESIVE_INVESTOR, CONSERVATIVE_BANKER, RISK_TAKER, OPPORTUNISTIC_TRADER};



typedef struct Dice_Value {
    int dice1;
    int dice2;
    int sum;
} Dice_Value;

typedef struct Player {
    enum PlayerBehavior player_behavior;
    char *player_name;
    int player_turn;
    int player_position;
    int player_balance;
    int player_properties[40];
    int num_properties;
    int is_in_jail;
    int jail_turns;
    int is_bankrupt;
    int railway_count;
    int utility_count;
    Dice_Value last_dice_roll;
    //int current_round;
    
    

} Player;

extern Player players[4];

typedef struct Railway {
    int square_no;
    char *railway_name;
    int purchase_price;
    int mortgage_value;
    int current_owner;
    int mortgage_status;
} Railway;
extern Railway railways[4];

typedef struct Utility {
    int square_no;
    char *utility_name;
    int purchase_price;
    int mortgage_value;
    int current_owner;
    int mortgage_status;
} Utility;
extern Utility utilities[2];

typedef struct Insurance_Company {
    char *insurance_company_name;
    int square_no;
} Insurance_Company;


enum InsurancePolicy {BASIC, COMPREHENSIVE, BUSINESS};
enum DisasterType {FIRE, FLOOD, RIOT,VANDALISM,EARTHQUAKE, BUILDING_COLLAPSE, ELECTRICAL_FAILURE};

typedef struct Insurance {
    enum InsurancePolicy insurance_policy;
    int coverage_disaster_types[7];
    int premium_percentage;
    int coverage_percentage;
    int is_cover_for_hotel;
    int is_cover_for_house;


} Insurance;



#endif