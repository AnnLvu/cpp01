#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;  // Private attribute for the zombie's name

public:
    Zombie(std::string name); // Constructor to set the zombie's name
    ~Zombie(); // Destructor to print a message when the zombie is destroyed

    void announce() const; // Method to announce the zombie
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
