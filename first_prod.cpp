#include <iostream>
#include <vector>

class Hex {
private:
    std::vector<unsigned char> digits;

public:
    // Конструктор класса
    Hex(std::vector<unsigned char> hexDigits) {
        digits = hexDigits;
    }

    // Метод для получения шестнадцатеричного числа в виде строки
    std::string getHexValue() {
        std::string hexValue = "";
        for (int i = digits.size() - 1; i >= 0; i--) {
            hexValue += getHexDigit(digits[i]);
        }
        return hexValue;
    }

    // Метод для получения десятичного значения шестнадцатеричной цифры
    int getDecimalValue(unsigned char hexDigit) {
        if (hexDigit >= '0' && hexDigit <= '9') {
            return hexDigit - '0';
        } else if (hexDigit >= 'A' && hexDigit <= 'F') {
            return hexDigit - 'A' + 10;
        } else if (hexDigit >= 'a' && hexDigit <= 'f') {
            return hexDigit - 'a' + 10;
        }
        return -1; // Возвращаем -1, если передана некорректная цифра
    }

    // Метод для получения шестнадцатеричной цифры из десятичного значения
    unsigned char getHexDigit(int decimalValue) {
        if (decimalValue >= 0 && decimalValue <= 9) {
            return decimalValue + '0';
        } else if (decimalValue >= 10 && decimalValue <= 15) {
            return decimalValue - 10 + 'A';
        }
        return '0'; // Возвращаем '0', если передано некорректное значение
    }
};

int main() {
    // Пример использования класса Hex
    std::vector<unsigned char> hexDigits = {'1', '4', '8'};
    Hex hexNumber(hexDigits);
    std::cout << "Шестнадцатеричное число: " << hexNumber.getHexValue() << std::endl;
    // std::cout << hexNumber.getHexDigit(hexNumber) << std::endl;
    return 0;
}