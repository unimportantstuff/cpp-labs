#include <iostream>

void print_array(int array[], int length) {
    std::cout << "[";
    for (int i = 0; i < length - 1; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << array[length - 1] << "]" << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    print_array(numbers, (sizeof(numbers) / sizeof(*numbers)));
}