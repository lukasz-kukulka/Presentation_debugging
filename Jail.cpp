#include "Jail.hpp"
#include <iostream>

Jail::Jail(int posX, int posY, std::string name) 
    : posX_(posX)
    , posY_(posY)
    , name_(name) 
{

}

void Jail::openJail() {
    generateData();
    printData();
}

void Jail::generateData() {
    prisoners_.push_back(std::make_shared<Prisoner>("AAAA", "XXX", 22, 5));
    prisoners_.push_back(std::make_shared<Prisoner>("CCCC", "XXXNNN", 55, 21));
    prisoners_.push_back(std::make_shared<Prisoner>("AAAA", "XGGG", 66, 9));
    prisoners_.push_back(std::make_shared<Prisoner>("WWWW", "JJFDJDJ", 18, 7));

    guards_.push_back(std::make_shared<Guard>("tttt", "iiii", 55));
    guards_.push_back(std::make_shared<Guard>("gggggg", "sdasdsad", 45));
    guards_.push_back(std::make_shared<Guard>("sdasdsad", "yuiuyiuyi", 66));
    guards_.push_back(std::make_shared<Guard>("gfhfsd", "tttrytr", 32));
}

void Jail::printData() {
    std::cout << "------------------ PRISONERS --------------------\n";
    for (auto const & ele : prisoners_) {
        std::cout << "NAME: " << ele->getName() << " | SURNAME: " << ele->getSurname() << " | AGE: " << ele->getAge() << " | READ BOOKS: " << ele->getReadBooks() <<'\n'; 
    }
    std::cout << '\n';
    std::cout << "------------------ GUARDS --------------------\n";
    for (auto const & ele : guards_) {
        std::cout << "NAME: " << ele->getName() << " | SURNAME: " << ele->getSurname() << " | AGE: " << ele->getAge() << " | YEARS TO PANSION: " << ele->getYearToPension() <<'\n'; 
    }
}