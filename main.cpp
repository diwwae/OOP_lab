#include <iostream>
#include "hex.h"

int main(){
    Hex hex_one = Hex("9A");
    Hex hex_two = Hex("1A");
    Hex decimal;
    // hex_number._digits = {'1','2','3'};
    std::cout << decimal.toHex(10).toString() << std::endl;
    // Hex res1 = decimal.toHex(10);

    std::cout << "..........................." << std::endl;
    Hex result_sum = hex_one + hex_two;
    result_sum.print();
    // std::cout << result.toString() << std::endl;

    std::cout << "..........................." << std::endl;
    Hex result_dif = hex_one - hex_two;
    result_dif.print();

    std::cout << "..........................." << std::endl;
    std::cout << (hex_one == hex_two) << std::endl;
    std::cout << (hex_one > hex_two) << std::endl;

    return 0;
}