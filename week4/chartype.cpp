#include <iostream>
#include <string>

bool isVowel(char c) {
    switch (c) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

bool isConsonant(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) && !isVowel(c);
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isPunctuation(char c) {
    switch (c) {
        case '.':
        case ',':
        case ':':
        case ';':
        case '?':
        case '"':
        case '\'':
        case '!':
        case '_':
        case '-':
        case '/':
            return true;
        default:
            return false;
    }
}

int main() {
    char character;

    std::cout << "Enter a character: ";
    std::cin >> character;

    std::string message;

    if (isVowel(character))
        message = " is a vowel";
    else if (isConsonant(character))
        message = " is a consonant";
    else if (isDigit(character))
        message = " is a digit";
    else if (isPunctuation(character))
        message = " is punctuation";
    else
        message = " is unrecognized";

    std::cout << character << message << std::endl;
}