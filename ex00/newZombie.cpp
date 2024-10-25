#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name); // Allocates a new zombie on the heap
}
