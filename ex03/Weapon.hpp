#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon();
    Weapon(const std::string& type);
    ~Weapon();
    const std::string& getType() const;
    void setType(const std::string& newType);
};

#endif
/*Weapon class:

It has a private string attribute type, which holds the weapon type.
It provides a getType() function to access the type and a setType() function to modify it.
*/
/*Класс Weapon:

Имеет приватный атрибут type для хранения типа оружия.
Включает функции getType() для получения значения типа оружия и setType() для его изменения.
*/
