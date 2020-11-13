#include "numberconversion.h"

int single_roman(char c) {
    switch (c) {
        case 'M':
        case 'm':
            return 1000;
        case 'D':
        case 'd':
            return 500;
        case 'C':
        case 'c':
            return 100;
        case 'L':
        case 'l':
            return 50;
        case 'X':
        case 'x':
            return 10;
        case 'V':
        case 'v':
            return 5;
        case 'I':
        case 'i':
            return 1;
        default:
            return 0;
    }
}

int romantoint(std::string roman_numeral) {
    int total = 0, current_value = 0;

    for (int i = 0; i < roman_numeral.size(); i++) {
        current_value = single_roman(roman_numeral[i]);

        if (current_value < single_roman(roman_numeral[i + 1]))
            total -= current_value;
        else
            total += current_value;
    }

    return total;
}

std::string inttoroman(int number) {
    int lookup_nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string lookup_strings[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    std::string result;

    for (int i = 0; i < 13; i++) {
        while (number >= lookup_nums[i]) {
            result += lookup_strings[i];
            number -= lookup_nums[i];
        }
    }

    return result;
}
