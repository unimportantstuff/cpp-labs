#include <iostream>
#include <vector>

float average(std::vector<float> nums) {
    float sum = 0;

    for (float num : nums)
        sum = sum + num;

    return sum / nums.size();
}

int main() {
    std::vector<float> grades;
    float grade;

    while (grade != -1) {
        std::cout << "Enter grade (or -1 to end): ";
        std::cin >> grade;
        grades.push_back(grade);
    }

    grades.pop_back();  // <- Removes last element (the -1 used to terminate)

    std::cout << "The average is: " << average(grades) << std::endl;
}