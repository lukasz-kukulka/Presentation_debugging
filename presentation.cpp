#include "Jail.hpp"
#include <utility>
#include <iostream>

void printJail(Jail& jail) {
    std::cout << jail.getName() << " JAIL:\n";
}

// Jail* printJailError() {
//     Jail jail(123, 234, "ERROR JAIL");
//     printJail(jail);
//     return &jail;
// }

int main() {
    std::pair<int, int>coordination{ 20, 30 };
    Jail jailOne {coordination.first, coordination.second, "Alcatraz"};
    printJail(jailOne);
    jailOne.openJail();
    Jail jailTwo {coordination.first, coordination.second, "Guantanamo"};
    jailTwo.openJail();
    // jailOne.callError();
    // Jail* jailErr; 
    // jailErr = printJailError();
    // std::cout << jailErr->getName() << '\n';
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl;
// }