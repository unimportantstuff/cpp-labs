#include <iostream>

void print_array(char array[], int length) {
    std::cout << "[";
    for (int i = 0; i < length - 1; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << array[length - 1] << "]" << std::endl;
}

void reverse(char s[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

/* Small test program */
int main() {
    char test[] = "Harry";

    std::cout << "Initial char array: " << std::endl;
    print_array(test, (sizeof(test) / sizeof(*test)));

    reverse(test, (sizeof(test) / sizeof(*test)));
    std::cout << "Reversed array: " << std::endl;
    print_array(test, (sizeof(test) / sizeof(*test)));
}