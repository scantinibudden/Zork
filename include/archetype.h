#ifndef ARCHETYPE_HH
#define ARCHETYPE_HH

#include <entity.h>
#include <attributes.h>

class Archetype : public Entity {
    public:
        // Constructor
        Archetype();
        
        // Observers
        Attributes getAttributes() const;

        // Modifiers
        void setAttributes(Attributes new_attributes);

    private:
        Attributes _attributes;
};

#endif