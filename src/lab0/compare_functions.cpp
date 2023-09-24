#include <iostream>

#include "compare_functions.h"

int compareStrings(const std::string &s1, const std::string &s2)
{
    return (s1==s2);
    // return s1.compare(s2);
}
