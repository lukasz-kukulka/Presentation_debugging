#pragma once
#include "Person.hpp" 

class Guard : public Person {
    Guard(std::string name, std::string surname, size_t age);

    std::string getName() override;
    int getYearToPension();
public:

private:
    int yearsToPansion_ { 67 };
};