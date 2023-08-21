#include <entity.h>

// Constructor
Entity::Entity(){
    this->setId("E-000");
    this->setName("The Entity");
    this->setDescription("A thing that should never be seen...");
}

// Observers
std::string Entity::getId() const{
    return this->_id;
}

std::string Entity::getName() const{
    return this->_name;
}

std::string Entity::getDescription() const{
    return this->_description;
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

void Entity::setDescription(std::string new_description){
    this->_description = new_description;
}
