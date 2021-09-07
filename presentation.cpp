#include "Jail.hpp"
#include <utility>
#include <iostream>

void printJail(Jail& jail) {
    std::cout << jail.getName() << " JAIL:\n";
}

int main() {
    std::pair<int, int>coordination{ 20, 30 };
    Jail jailOne {coordination.first, coordination.second, "Alcatraz"};
    printJail(jailOne);
    jailOne.openJail();
    Jail jailTwo {coordination.first, coordination.second, "Guantanamo"};
    jailTwo.openJail();
    return 0;
}