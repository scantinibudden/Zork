#ifndef ATTRIBUTES_HH
#define ATTRIBUTES_HH

class Attributes {
    public:
        // Constructors
        Attributes();
        Attributes(int vitality, int endurance, int strength, int dexterity, int intelligence, int insight, int faith, int charisma);

        // Observers
        int getVitality() const;
        int getEndurance() const;
        int getStrength() const;
        int getDexterity() const;
        int getIntelligence() const;
        int getInsight() const;
        int getFaith() const;
        int getCharisma() const;

        // Logical
        bool operator==(const Attributes& other) const;
        bool operator!=(const Attributes& other) const;
        bool operator<(const Attributes& other) const;
        bool operator>(const Attributes& other) const;
        bool operator<=(const Attributes& other) const;
        bool operator>=(const Attributes& other) const;

        // Arithmetic
        Attributes operator+(const Attributes& other) const;
        Attributes operator-(const Attributes& other) const;
        Attributes operator*(const Attributes& other) const;
        Attributes operator/(const Attributes& other) const;

        // Modifiers
        void setVitality(int new_vitality);
        void setEndurance(int new_endurance);
        void setStrength(int new_strength);
        void setDexterity(int new_dexterity);
        void setIntelligence(int new_intelligence);
        void setInsight(int new_insight);
        void setFaith(int new_faith);
        void setCharisma(int new_charisma);

    private:
        int _vitality;
        int _endurance;
        int _strength;
        int _dexterity;
        int _intelligence;
        int _insight;
        int _faith;
        int _charisma;
};

#endif