#include "Zombie.hpp"

int main() {
    Zombie *zombiehord = zombieHorde(15, "Stive");
	delete[] zombiehord;
}
