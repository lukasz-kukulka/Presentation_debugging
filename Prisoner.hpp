#pragma once
#include "Person.hpp" 

class Prisoner : public Person {
public:
    Prisoner(std::string name, std::string surname, size_t age, int punishment);

    std::string getName() override;
    size_t getReadBooks();

private:
    size_t readBooks_;
    int punishment_ { };
};