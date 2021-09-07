#include "Jail.hpp"

Jail::Jail(int posX, int posY) : posX_(posX), posY_(posY) {

}

void Jail::openJail() {
    
}

void Jail::generateData() {
    prisoners_.push_back(std::make_shared<Prisoner>("AAAA", "XXX", 22, 5));
    prisoners_.push_back(std::make_shared<Prisoner>("CCCC", "XXXNNN", 55, 21));
    prisoners_.push_back(std::make_shared<Prisoner>("AAAA", "XGGG", 66, 9));
    prisoners_.push_back(std::make_shared<Prisoner>("WWWW", "JJFDJDJ", 18, 7));

    guards_.push_back(std::make_shared<Guard>("tttt", "iiii", 55));
    guards_.push_back(std::make_shared<Guard>("gggggg", "sdasdsad", 445));
    guards_.push_back(std::make_shared<Guard>("sdasdsad", "yuiuyiuyi", 66));
    guards_.push_back(std::make_shared<Guard>("gfhfsd", "tttrytr", 32));
}