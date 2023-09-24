#include <iostream>
#include "compare_functions.h"
#include "check_is_good_date.h"

int checkIsGoodDate(const std::string &dayOfWeek, int verifiedNumber){
    bool conditionMet = false;

    if (compareStrings(dayOfWeek, "Понедельник") == 1) 
        conditionMet = (verifiedNumber == 12);

    else if (compareStrings(dayOfWeek, "Вторник") == 1) 
        conditionMet = (verifiedNumber > 95);

    else if (compareStrings(dayOfWeek, "Среда") == 1) 
        conditionMet = (verifiedNumber == 34);

    else if (compareStrings(dayOfWeek, "Четверг") == 1) 
        conditionMet = (verifiedNumber == 0);

    else if (compareStrings(dayOfWeek, "Пятница") == 1) 
        conditionMet = (verifiedNumber % 2 == 0);

    else if (compareStrings(dayOfWeek, "Суббота") == 1) 
        conditionMet = (verifiedNumber == 56);

    else if (compareStrings(dayOfWeek, "Воскресенье") == 1) 
        conditionMet = ((verifiedNumber == 666)
                         || (verifiedNumber == -666));

    return (conditionMet ? 1 : 0);
}