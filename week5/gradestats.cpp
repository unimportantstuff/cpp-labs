#include <iostream>
#include <vector>

using namespace std;

float average(vector<float> nums) {
    float sum = 0;

    for (float num : nums)
        sum = sum + num;

    return sum / nums.size();
}

int main() {
    vector<float> grades;
    float grade;

    while (grade != -1) {
        cout << "Enter grade (or -1 to end): ";
        cin >> grade;
        grades.push_back(grade);
    }

    grades.pop_back();  // <- Removes last element (the -1 used to terminate)

    cout << "The average is: " << average(grades);
}