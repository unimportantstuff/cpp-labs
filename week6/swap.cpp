#include <iostream>

void print_array(int array[], int length) {
    std::cout << "[";
    for (int i = 0; i < length - 1; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << array[length - 1] << "]" << std::endl;
}

void swap(int array[], int i1, int i2) {
    int temp = array[i1];
    array[i1] = array[i2];
    array[i2] = temp;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    std::cout << "Before swapping:" << std::endl;
    print_array(numbers, (sizeof(numbers) / sizeof(*numbers)));
    swap(numbers, 0, 1);
    std::cout << "After swapping:" << std::endl;
    print_array(numbers, (sizeof(numbers) / sizeof(*numbers)));
}