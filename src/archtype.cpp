#include <archtype.h>

// Constructor
Archtype::Archtype() {
    this->setId("A-000");
    this->setName("Archtype");
    this->setDescription("An archtype");
    this->setAttributes(Attributes());
}

// Observers
Attributes Archtype::getAttributes() const {
    return this->_attributes;
}

// Modifiers
void Archtype::setAttributes(Attributes new_attributes) {
    this->_attributes = new_attributes;
}