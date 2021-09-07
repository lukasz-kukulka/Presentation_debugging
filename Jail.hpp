#pragma once

#include <vector>
#include <memory>
#include <list>

#include "Person.hpp"
#include "Prisoner.hpp"
#include "Guard.hpp"

class Jail {
public:
    Jail(int posX, int posY);
    void openJail();
    void generateData();

private:
    int posX_;
    int posY_;
    std::vector<std::shared_ptr<Prisoner>>prisoners_;
    std::list<std::shared_ptr<Guard>>guards_;
};