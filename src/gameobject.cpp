#include <gameobject.h>

// Constructor

GameObject::GameObject(){
    this->name = "GameObject";
}

// Observers

const bool GameObject::isCharacter() const{
    return false;
}

const std::string GameObject::getName() const{
    return this->name;
}

// Modifiers

void GameObject::setName(std::string new_name){
    this->name = new_name;
    return;
}