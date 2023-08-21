#include <character.h>
#include <algorithm>

// Constructor
Character::Character() {
    this->setId("C-000");
    this->setName("Character");
    this->setDescription("A character");
    this->setMaxHealth(100);
    this->setHealth(this->_max_health);
    this->setAttributes(Attributes(0,0,0,0,0,0,0,0));
    //TODO set default class
    //TODO set default race
}

// Observers
int Character::getMaxHealth() const {
    return this->_max_health;
}

int Character::getHealth() const {
    return this->_health;
}

Attributes Character::getAttributes() const {
    return this->_attributes;
}

Archtype Character::getClass() const {
    return this->_class;
}

Archtype Character::getRace() const {
    return this->_race;
}

// Modifiers
void Character::setMaxHealth(int new_max_health) {
    this->_max_health = std::max(new_max_health, 1);
    this->setHealth(this->_health);
}

void Character::setHealth(int new_health) {
    this->_health = std::max(std::min(new_health, _max_health), 0);
}

void Character::setAttributes(Attributes new_attributes) {
    this->_attributes = new_attributes;
}

void Character::setClass(Archtype new_class) {
    this->_class = new_class;
}

void Character::setRace(Archtype new_race) {
    this->_race = new_race;
}