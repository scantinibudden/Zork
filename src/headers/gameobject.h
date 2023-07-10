#ifndef GAMEOBJECT_HH
#define GAMEOBJECT_HH

#include <string>

class GameObject {
    public:
        // Constructor
        GameObject();

        // Observers
        virtual const bool isCharacter() const;
        const std::string getName() const;

        // Modifiers
        void setName(std::string new_name);

    protected:
        std::string name;
    private:
};

#endif