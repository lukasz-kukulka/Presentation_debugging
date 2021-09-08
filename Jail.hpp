#pragma once

#include <vector>
#include <memory>
#include <list>
#include <string>

#include "Person.hpp"
#include "Prisoner.hpp"
#include "Guard.hpp"

class Jail {
public:
    Jail(int posX, int posY, std::string name);
    void openJail();
    std::string getName() { return name_; }
    void callError();
    
private:
    void generateData();
    void printData();
    int posX_;
    int posY_;
    std::string name_ { };
    std::vector<std::shared_ptr<Prisoner>>prisoners_;
    std::list<std::shared_ptr<Guard>>guards_;
};