#include <iostream>
#include <vector>

class Hex {
    public:
        std::vector<unsigned char> digits;
        

};

int main(){
    Hex hex_number;
    hex_number.digits = {1,2,3};
    return 0;
}