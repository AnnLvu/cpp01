#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie zombie(name); // Stack allocation
    zombie.announce();   // The zombie announces itself
}
