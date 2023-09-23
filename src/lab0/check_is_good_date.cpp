#include <iostream>
#include "compare_functions.h"

int checkIsGoodDate(const std::string &dayOfWeek, int verifiedNumber){
    bool conditionMet = false;

    if (compareStrings(dayOfWeek, "Monday") == 0) 
        conditionMet = (verifiedNumber == 12);

    else if (compareStrings(dayOfWeek, "Tuesday") == 0) 
        conditionMet = (verifiedNumber > 95);

    else if (compareStrings(dayOfWeek, "Wednesday") == 0) 
        conditionMet = (verifiedNumber == 34);

    else if (compareStrings(dayOfWeek, "Thursday") == 0) 
        conditionMet = (verifiedNumber == 0);

    else if (compareStrings(dayOfWeek, "Friday") == 0) 
        conditionMet = (verifiedNumber % 2 == 0);

    else if (compareStrings(dayOfWeek, "Saturday") == 0) 
        conditionMet = (verifiedNumber == 56);

    else if (compareStrings(dayOfWeek, "Sunday") == 0) 
        conditionMet = ((verifiedNumber == 666) || (verifiedNumber == -666));

    return (conditionMet ? 1 : 0);
}