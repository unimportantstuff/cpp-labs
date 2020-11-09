#include <string>
#include <vector>

class Person {
    std::string name;
    std::vector<Person*> friends;

   public:
    Person(std::string);
    void befriend(Person*);
    void unfriend(Person*);
    void print();
};