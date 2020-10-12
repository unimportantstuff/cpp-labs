#include <time.h>

#include <array>
#include <iostream>

using namespace std;

int min(array<int, 10> nums) {
    int min = INT_MAX;
    for (int num : nums)
        if (num < min) min = num;
    return min;
}

int max(array<int, 10> nums) {
    int max = INT_MIN;
    for (int num : nums)
        if (num > max) max = num;
    return max;
}

int main() {
    srand(time(NULL));

    array<int, 10> numbers;

    for (int i = 0; i < 10; i++)
        numbers[i] = rand() % 100 + 1;

    cout << "Random integers: ";
    for (int num : numbers) cout << num << " ";

    cout << "\nMinimum is " << min(numbers) << ", maximum is " << max(numbers) << "\n";
}