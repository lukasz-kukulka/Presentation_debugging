#pragma once
#include "Person.hpp" 

class Guard : public Person {
    Guard(std::string name, std::string surname, size_t age, int punishment);

    std::string getName() override;
    int getReadBooks();
public:

private:
    int yearsToPansion_;
    int punishment_;
};