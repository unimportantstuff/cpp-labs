#include "Person.h"

#include <algorithm>
#include <iostream>
#include <vector>

Person::Person(std::string name)
    : name(name), friends(std::vector<Person*>()){};

void Person::befriend(Person* person) {
    this->friends.push_back(person);
}

void Person::unfriend(Person* person) {
    auto to_unfriend = std::find(this->friends.begin(), this->friends.end(), person);
    if (to_unfriend != this->friends.end()) {
        this->friends.erase(to_unfriend);
    }
}

void Person::print() {
    std::cout << "[Person]\n"
              << "\n\tName: " << this->name << "\n\tFriends: ";

    for (auto f : this->friends) {
        std::cout << f->name << " ";
    }

    std::cout << "\n"
              << std::endl;
}