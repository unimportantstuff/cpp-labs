#include <time.h>

#include <iostream>
#include <vector>

int min(std::vector<int> nums) {
    int min = INT8_MAX;
    for (int num : nums)
        if (num < min) min = num;
    return min;
}

int max(std::vector<int> nums) {
    int max = INT8_MIN;
    for (int num : nums)
        if (num > max) max = num;
    return max;
}

int main() {
    srand(time(NULL));

    std::vector<int> numbers;

    for (int i = 0; i < 10; i++)
        numbers.push_back(rand() % 100 + 1);

    std::cout << "Random integers: ";
    for (int num : numbers) std::cout << num << " ";

    std::cout << "\nMinimum is "
              << min(numbers)
              << ", maximum is "
              << max(numbers)
              << std::endl;
}