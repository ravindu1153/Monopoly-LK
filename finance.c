#include <stdio.h>
#include "types.h"
#include "finance.h"

void initialize_insurance_policies()
{
    Insurance insurance_policies[3] = {
        {BASIC, {FIRE, FLOOD}, 5, 80},
        {COMPREHENSIVE, {FIRE, FLOOD, RIOT, VANDALISM, EARTHQUAKE}, 10, 100},
        {BUSINESS, {FIRE, FLOOD, RIOT, VANDALISM, EARTHQUAKE, BUILDING_COLLAPSE, ELECTRICAL_FAILURE}, 15, 100}
    };
}
