#include "Jail.hpp"
#include <utility>

int main() {
    std::pair<int, int>coordination{ 20, 30 };
    Jail jail {coordination.first, coordination.second };
    return 0;
}