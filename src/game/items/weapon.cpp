#include <weapon.h>

// Constructor
Weapon::Weapon() {};

// Observers
int Weapon::getAttack() const {
    return this->_attack;
}

Entity Weapon::getDamageType() const {
    return this->_damageType;
}

// Modifiers
void Weapon::setAttack(int new_attack) {
    this->_attack = new_attack;
}

void Weapon::setDamageType(Entity new_damage_type) {
    this->_damageType = new_damage_type;
}