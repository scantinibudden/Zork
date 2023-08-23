#include <entity.h>

// Constructor
Entity::Entity(){}

// Observers
std::string Entity::getId() const{
    return this->_id;
}

std::string Entity::getName() const{
    return this->_name;
}

// Logical
bool Entity::operator==(const Entity& other) const{
    return this->_id == other._id;
}

bool Entity::operator!=(const Entity& other) const{
    return !this->operator==(other);
}

// Modifiers
void Entity::setId(std::string new_id){
    this->_id = new_id;
}

void Entity::setName(std::string new_name){
    this->_name = new_name;
}
