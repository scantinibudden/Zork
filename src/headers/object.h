#ifndef OBJECT_HH
#define OBJECT_HH

#include <string>

class Object{
    public:
        Object(std::string new_name);

        void setName(std::string new_name);
        void setDescription(std::string new_desc);

        const std::string getName() const;
        const std::string getDescription() const;

    private:
        std::string name = "";
        std::string description = "";

};

#endif