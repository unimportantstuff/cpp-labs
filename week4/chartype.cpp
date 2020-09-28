#include <iostream>

bool isVowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) && !isVowel(c);
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isPunctuation(char c) {
    return c == '.' || c == ',' || c == ':' || c == ';' || c == '?' || c == '"' || c == '\'' || c == '!' || c == '_' || c == '-' || c == '/';
}

using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    string message;

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

    cout << character << message << "\n";
}