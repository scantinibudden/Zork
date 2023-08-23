#ifndef ENTITY_HH
#define ENTITY_HH

#include <string>

class Entity {
    public:
        // Constructor
        Entity();

        // Observers
        std::string getId() const;
        std::string getName() const;

        // Logical
        bool operator==(const Entity& other) const;
        bool operator!=(const Entity& other) const;

        // Modifiers
        void setId(std::string new_id);
        void setName(std::string new_name);

    private:
        std::string _id;
        std::string _name;
};

#endif