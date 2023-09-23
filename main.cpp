#include <iostream>

#include "check_is_good_date.h"

using namespace std;

int main() {
    char dayOfWeek[11];
    int verifiedNumber;
    std::cin >> dayOfWeek;
    std::cin >> verifiedNumber;
    
    cout << checkIsGoodDate(dayOfWeek, verifiedNumber);
    
    return 0;
}