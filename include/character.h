#ifndef CHARACTER_HH
#define CHARACTER_HH

#include <string>
#include <entity.h>
#include <archtype.h>

class Character : public  Entity {
    public:
        // Constructor
        Character();

        // Observers
        int getMaxHealth() const;
        int getHealth() const;
        Attributes getAttributes() const;
        Archtype getClass() const;
        Archtype getRace() const;



        // Modifiers
        void setMaxHealth(int new_max_health);
        void setHealth(int new_health);
        void setAttributes(Attributes new_attributes);
        void setClass(Archtype new_class);
        void setRace(Archtype new_race);

    private:
        int _max_health;
        int _health;

        Attributes _attributes;
        Archtype _class;
        Archtype _race;
};

#endif