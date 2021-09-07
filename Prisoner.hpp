#pragma once
#include "Person.hpp" 

class Prisoner : public Person {
    Prisoner(std::string name, std::string surname, size_t age, int punishment);

    std::string getName() override;
    int getReadBooks();
public:

private:
    int readBooks_;
    int punishment_ { };
};