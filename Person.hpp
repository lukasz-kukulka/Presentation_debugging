#pragma once

#include <string>
#include <stdlib.h>

class Person {
public:
    Person(std::string name, std::string surname, size_t age);
    virtual std::string getName() = 0;
    std::string getSurname() { return surname_; }
    size_t getAge() { return age_; }

protected:
    std::string name_;
    std::string surname_;
    size_t age_;
};