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


typedef struct Property {
    int square_no;
    char *property_name;
    char *property_color;
    int purchase_price;
    int mortgage_value;
    int base_rent;
    int house_cost;
    int hotel_cost;
    int num_houses;
    int num_hotels;
    int current_owner;
    int mortgage_status;
    int insurance_status;
    int property_age;
} Property;




#endif