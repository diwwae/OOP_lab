#include "hex.h"
#include <iostream>
#include "ConditionValidator.h"
#include <vector>
#include <cmath>
#include <cctype>
#include <sstream>

std::vector<unsigned char> _digits;
        
Hex::Hex() = default;

Hex::Hex(std::vector<unsigned char> _digits) { _digits = _digits; }

Hex::Hex(const std::string &str) {
    _digits.reserve(str.size());
    for (int64_t i = str.size() - 1; i >= 0; --i) {
        CheckCondition((str[i] > 70 || str[i] < 48) && (str[i] > 102 || str[i] < 97),
                "String contains invalid argument");
        _digits.push_back(str[i]);
    }
}

std::string Hex::toString(){
    return std::string(_digits.rbegin(), _digits.rend());
}

void Hex::print() {
    for (int64_t i = _digits.size() - 1; i >= 0; --i) {
        std::cout << _digits[i];
    }

    std::cout << std::endl;
}
//разобраться в этих конструкторах
Hex::Hex(const Hex &oth) noexcept { this->_digits = oth._digits; }

Hex::Hex(Hex &&oth) noexcept { this->_digits = std::move(oth._digits); }

Hex &Hex::operator=(Hex oth) noexcept {
    _digits = oth._digits;
    return *this;
}

int Hex::toDecimal(Hex &hex_val){
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

Hex Hex::toHex(int decimal_val){
    Hex hex_val;
    std::stringstream hex_str;
    hex_str << std::hex << decimal_val;
    hex_val = Hex(hex_str.str());
    for (int i = hex_val._digits.size() - 1; i>=0; --i){
        hex_val._digits[i] = std::toupper(hex_val._digits[i]);
    }
    return hex_val;
}

Hex Hex::operator+(Hex &oth) noexcept {
    return toHex(toDecimal(*this) + toDecimal(oth));
}

Hex Hex::operator-(Hex &oth){
    CheckCondition(*this < oth,
                  "The first number can't be lower than the second");
    return toHex(toDecimal(*this) - toDecimal(oth));
}

bool Hex::operator==(const Hex &oth) const {
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

bool Hex::operator!=(const Hex &oth) const { return !(*this == oth); }

bool Hex::operator>(const Hex &oth) const {
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

bool Hex::operator<(const Hex &oth) const {
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