#pragma once

#include <vector>
#include <string>

class Hex {

public:
   std::vector<unsigned char> _digits;

   Hex();

   Hex(std::vector<unsigned char>);

   Hex(const Hex &oth) noexcept;

   Hex(const std::string &str);

   Hex(Hex &&) noexcept;

   int toDecimal(Hex &hex_val);

   Hex toHex(int decimal_val);

   Hex &operator=(Hex oth) noexcept;

   Hex operator+(Hex &oth) noexcept;

   Hex operator-(Hex &other);

   bool operator==(const Hex &oth) const;

   bool operator!=(const Hex &oth) const;

   bool operator>(const Hex &oth) const;

   bool operator<(const Hex &oth) const;

   void print();

   std::string toString();

};