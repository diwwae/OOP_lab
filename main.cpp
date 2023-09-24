#include <iostream>

#include "check_is_good_date.h"

using namespace std;

int main() {
    string dayOfWeek;
    int verifiedNumber;
    cin >> dayOfWeek;
    cin >> verifiedNumber;
    
    cout << checkIsGoodDate(dayOfWeek, verifiedNumber) << endl;
    
    return 0;
}