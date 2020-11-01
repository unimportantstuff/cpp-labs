#include <iostream>
#include <string>

struct Employee {
    std::string first_name, last_name, email, phone_number;
    double id;
    double salary;
    Employee* manager;
};

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
}