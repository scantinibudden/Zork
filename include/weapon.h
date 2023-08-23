#ifndef WEAPON_HH
#define WEAPON_HH

#include <entity.h>

class Weapon : public Entity {
    public:
        // Constructor
        Weapon();

        // Observers
        int getAttack() const;
        Entity getDamageType() const;

        // Modifiers
        void setAttack(int new_attack);
        void setDamageType(Entity new_damage_type);

        private:
            int _attack;
            Entity _damageType;
};

#endif