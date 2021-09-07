#pragma once
#include "Person.hpp" 

class Guard : public Person {
    Guard(std::string name, std::string surname, size_t age);

    std::string getName() override;
    size_t getYearToPension();
public:

private:
    size_t yearsToPansion_;
};