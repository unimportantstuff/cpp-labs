#include <iostream>
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
              << "\n\teMail: "
              << e.email
              << "\n\tPhone Number: "
              << e.phone_number
              << "\n\tSalary: "
              << e.salary;

    if (e.manager != nullptr) {
        std::cout << "\n\tManager Name: "
                  << e.manager->first_name
                  << " "
                  << e.manager->last_name;
    }

    std::cout << std::endl;
}

int main() {
    Employee m = {
        "John",
        "Doe",
        "john.doe@gm.com",
        "+971 67 879 654",
        1,
        5600,
        nullptr,
    };

    Employee s1 = {
        "Siin",
        "Fisa",
        "sf@gm.com",
        "+971 64 279 662",
        2,
        2400,
        &m,
    };

    Employee s2 = {
        "Ben",
        "Ten",
        "ben.ten@gm.com",
        "+971 45 243 522",
        3,
        2400,
        &m,
    };

    std::cout << "Created employees: ";
    print_employee(m);
    print_employee(s1);
    print_employee(s2);
}