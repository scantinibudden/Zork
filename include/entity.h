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
        std::string getDescription() const;

        // Logical
        bool operator==(const Entity& other) const;
        bool operator!=(const Entity& other) const;

        // Modifiers
        void setId(std::string new_id);
        void setName(std::string new_name);
        void setDescription(std::string new_description);

    private:
        std::string _id;
        std::string _name;
        std::string _description;
};

#endif