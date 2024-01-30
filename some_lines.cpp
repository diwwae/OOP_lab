#include <iostream>
#include <vector>
#include <string>
#include "ConditionValidator.h"
#include <cmath>
#include <cctype>
#include <sstream>

class Hex {
    public:
        std::vector<unsigned char> _digits;
        
        Hex() = default;

        Hex(std::vector<unsigned char> _digits) { _digits = _digits; }

        Hex(const std::string &str) {
            _digits.reserve(str.size());
            for (int64_t i = str.size() - 1; i >= 0; --i) {
                CheckCondition((str[i] > 70 || str[i] < 48) && (str[i] > 102 || str[i] < 97),
                     "String contains invalid argument");
                _digits.push_back(str[i]);
            }
        }

        ~Hex() = default;

        void print() const {
            for (int64_t i = _digits.size() - 1; i >= 0; --i) {
                std::cout << _digits[i];
            }

            std::cout << std::endl;
        }
//разобраться в этих конструкторах
        Hex(const Hex &oth) noexcept { this->_digits = oth._digits; }

        Hex(Hex &&oth) noexcept { this->_digits = std::move(oth._digits); }

        Hex &operator=(Hex oth) noexcept {
            _digits = oth._digits;
            return *this;
        }

        int toDecimal(Hex &hex_val) const {
            int decimalValue = 0;
            for (int i = hex_val._digits.size() - 1; i >= 0; --i) {
                if (std::isalpha(hex_val._digits[i])) {
                    decimalValue += (std::toupper(hex_val._digits[i]) - 'A' + 10) * std::pow(16, i);
                } else {
                    decimalValue += (hex_val._digits[i] - '0') * std::pow(16, i);
                }
            }
            return decimalValue;
        }

        Hex toHex(int decimal_val){
            Hex hex_val;
            std::stringstream hex_str;
            hex_str << std::hex << decimal_val;
            hex_val = Hex(hex_str.str());
            for (int i = hex_val._digits.size() - 1; i>=0; --i){
                hex_val._digits[i] = std::toupper(hex_val._digits[i]);
            }
            return hex_val;
        }

        Hex operator+(Hex &rhs) {
            return toHex(toDecimal(*this) + toDecimal(rhs));
        }

        Hex operator-(Hex &rhs) {
            return toHex(toDecimal(*this) - toDecimal(rhs));
        }

        std::string toString() const {
            return std::string(_digits.rbegin(), _digits.rend());
        }

        bool operator==(const Hex &oth) const {
            if (_digits.size() != oth._digits.size()) {
                return false;
            }

            for (size_t i = 0; i < _digits.size(); ++i) {
                if (_digits[i] != oth._digits[i]) {
                    return false;
                }
            }

            return true;
            }

        bool operator!=(const Hex &oth) const { return !(*this == oth); }

        bool operator>(const Hex &oth) const {
            if (oth._digits.size() > _digits.size()) {
                return false;
            }

            for (int64_t i = _digits.size() - 1; i >= 0; --i) {
                if (_digits[i] > oth._digits[i]) {
                    return true;

                } else if (_digits[i] < oth._digits[i]) {
                    return false;
                }
            }

            return false;
        }

        bool operator<(const Hex &oth) const {
            if (oth._digits.size() > _digits.size()) {
                return true;
            }

            for (int64_t i = 0; i < _digits.size(); ++i) {
                if (_digits[i] > oth._digits[i]) {
                    return false;
                }
            }
            return false;
        }

};

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