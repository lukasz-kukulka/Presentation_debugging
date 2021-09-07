#include "Guard.hpp"

Guard::Guard(std::string name, std::string surname, size_t age) 
    : Person(name, surname, age) 
{
    yearsToPansion_ = 67;
}

std::string Guard::getName() {
    return "GUARD: " + name_;
}

size_t Guard::getYearToPension() {
    return yearsToPansion_ - age_;
}