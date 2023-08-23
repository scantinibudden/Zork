#ifndef WEAPON_HH
#define WEAPON_HH

#include <entity.h>
#include <attributes.h>

class Weapon : public Entity {
    public:
        // Constructor
        Weapon();

        // Observers
        int getAttack() const;
        Entity getDamageType() const;
        Attributes getRequirements() const;

        // Modifiers
        void setAttack(int new_attack);
        void setDamageType(Entity new_damage_type);
        void setRequirements(Attributes new_requirements);

        private:
            int _attack;
            Entity _damageType;
            Attributes _requirements;

};

#endif