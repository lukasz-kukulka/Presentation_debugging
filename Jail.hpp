#include <vector>
#include <memory>
#include <list>

#include "Prisoner.hpp"
#include "Guard.hpp"

class Jail {
public:
    Jail(int posX, int posY);
    void openJail();

private:
    int posX_;
    int posY_;
    std::vector<std::shared_ptr<Prisoner>>prisoners_;
    std::list<std::shared_ptr<Prisoner>>guards_;

};