#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    Zombie::name = name;
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
