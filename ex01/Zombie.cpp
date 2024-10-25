#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::Zombie(std::string name) {
    Zombie::name = name;
}

Zombie::~Zombie() {
    std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::give_name(std::string name) {
    Zombie::name = name;
}

Zombie* Zombie::newZombie( std::string name ) {
	return new Zombie(name);
}
