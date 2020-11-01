#include <iostream>
#include <new>
#include <string>

struct Employee {
    std::string first_name, last_name, email, phone_number;
    double id;
    double salary;
    Employee* manager;
};

void print_employee(Employee& e) {
    std::cout << "\n\tName: "
              << e.first_name
              << " "
              << e.last_name
              << "\n\tID: "
              << e.id
              << std::endl;
}

template <typename T>
T prompt(const char* question) {
    T value;

    std::cout << question;

    /* 
        specially for strings
        as whitespace shouldn't
        be ignored in their case
    */
    if constexpr (std::is_same<T, std::string>::value) {
        std::getline(std::cin >> std::ws, value);
    } else {
        std::cin >> value;
    }

    return value;
}

int main() {
    int number_of_employees;
    Employee* employees;

    number_of_employees = prompt<int>("Please enter the number of employees you would like: ");
    employees = new Employee[number_of_employees];

    for (int i = 0; i < number_of_employees; i++) {
        employees[i].id = i;
        employees[i].manager = nullptr;

        employees[i].first_name = prompt<std::string>("\nPlease enter employees first name: ");
        employees[i].last_name = prompt<std::string>("Please enter employees last name: ");
        employees[i].email = prompt<std::string>("Please enter employees email: ");
        employees[i].phone_number = prompt<std::string>("Please enter employees phone number: ");
        employees[i].salary = prompt<double>("Please enter employees salary: ");
    }

    std::cout << "\nYour employees: " << std::endl;

    for (int i = 0; i < number_of_employees; i++) {
        print_employee(employees[i]);
    }

    // clean up
    delete[] employees;
}