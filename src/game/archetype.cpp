#include <archetype.h>

// Constructor
Archetype::Archetype() {
    this->setAttributes(Attributes());
}

// Observers
Attributes Archetype::getAttributes() const {
    return this->_attributes;
}

// Modifiers
void Archetype::setAttributes(Attributes new_attributes) {
    this->_attributes = new_attributes;
}