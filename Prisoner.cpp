#include "Prisoner.hpp"

Prisoner::Prisoner(std::string name, std::string surname, size_t age, int punishment) 
    : Person(name, surname, age) 
    , punishment_(punishment) 
{
    readBooks_ = 0;
}

std::string Prisoner::getName() {
    return "PRISONER: " + name_;
}

int Prisoner::getReadBooks() {
    return readBooks_ * punishment_;
}