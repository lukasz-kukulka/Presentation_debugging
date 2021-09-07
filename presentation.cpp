#include "Jail.hpp"
#include <utility>

void printJail() {

}

int main() {
    std::pair<int, int>coordination{ 20, 30 };
    Jail jailOne {coordination.first, coordination.second, "Alcatraz"};
    jailOne.openJail();
    Jail jailTwo {coordination.first, coordination.second, "Alcatraz"};
    jailTwo.openJail();
    return 0;
}