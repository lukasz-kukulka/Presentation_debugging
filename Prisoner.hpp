#pragma once
#include "Person.hpp" 

class Prisoner : public Person {
public:
    Prisoner(std::string name, std::string surname, size_t age, int punishment);

    std::string getName() override;
    int getReadBooks();

private:
    int readBooks_;
    int punishment_ { };
};