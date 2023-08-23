#ifndef CHARACTER_HH
#define CHARACTER_HH

#include <string>
#include <entity.h>
#include <archetype.h>

class Character : public  Entity {
    public:
        // Constructor
        Character();

        // Observers
        int getMaxHealth() const;
        int getHealth() const;
        Attributes getAttributes() const;
        Archetype getClass() const;
        Archetype getRace() const;



        // Modifiers
        void setMaxHealth(int new_max_health);
        void setHealth(int new_health);
        void setAttributes(Attributes new_attributes);
        void setClass(Archetype new_class);
        void setRace(Archetype new_race);

    private:
        int _max_health;
        int _health;

        Attributes _attributes;
        Archetype _class;
        Archetype _race;
};

#endif