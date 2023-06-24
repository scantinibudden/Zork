#include "object.h"

Object::Object(std::string new_name) {
    this->setName(new_name);
    this->setDescription("a " + new_name);
}

void Object::setName(std::string new_name) {
    this->name = new_name;
}

const std::string Object::getName() const {
    return this->name;
}

void Object::setDescription(std::string new_desc) {
    this->description = new_desc;
}

const std::string Object::getDescription() const {
    return this->description;
}