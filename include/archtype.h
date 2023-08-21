#ifndef ARCHTYPE_HH
#define ARCHTYPE_HH

#include <entity.h>
#include <attributes.h>

class Archtype : public Entity {
    public:
        // Constructor
        Archtype();
        
        // Observers
        Attributes getAttributes() const;

        // Modifiers
        void setAttributes(Attributes new_attributes);

    private:
        Attributes _attributes;
};

#endif