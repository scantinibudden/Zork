#include <attributes.h>

// Constructors
Attributes::Attributes() {
    this->setVitality(0);
    this->setEndurance(0);
    this->setStrength(0);
    this->setDexterity(0);
    this->setIntelligence(0);
    this->setInsight(0);
    this->setFaith(0);
    this->setCharisma(0);
}

Attributes::Attributes(int vitality, int endurance, int strength, int dexterity, int intelligence, int insight, int faith, int charisma) {
    this->setVitality(vitality);
    this->setEndurance(endurance);
    this->setStrength(strength);
    this->setDexterity(dexterity);
    this->setIntelligence(intelligence);
    this->setInsight(insight);
    this->setFaith(faith);
    this->setCharisma(charisma);
}

// Observers
int Attributes::getVitality() const {
    return this->_vitality;
}

int Attributes::getEndurance() const {
    return this->_endurance;
}

int Attributes::getStrength() const {
    return this->_strength;
}

int Attributes::getDexterity() const {
    return this->_dexterity;
}

int Attributes::getIntelligence() const {
    return this->_intelligence;
}

int Attributes::getInsight() const {
    return this->_insight;
}

int Attributes::getFaith() const {
    return this->_faith;
}

int Attributes::getCharisma() const {
    return this->_charisma;
}


// Logical
bool Attributes::operator==(const Attributes& other) const {
    bool are_equal = true;

    are_equal &= this->_vitality == other._vitality;
    are_equal &= this->_endurance == other._endurance;
    are_equal &= this->_strength == other._strength;
    are_equal &= this->_dexterity == other._dexterity;
    are_equal &= this->_intelligence == other._intelligence;
    are_equal &= this->_insight == other._insight;
    are_equal &= this->_faith == other._faith;
    are_equal &= this->_charisma == other._charisma;

    return are_equal;
}

bool Attributes::operator!=(const Attributes& other) const {
    return !this->operator==(other);
}

bool Attributes::operator<(const Attributes& other) const {
    bool is_smaller = true;

    is_smaller &= this->_vitality < other._vitality;
    is_smaller &= this->_endurance < other._endurance;
    is_smaller &= this->_strength < other._strength;
    is_smaller &= this->_dexterity < other._dexterity;
    is_smaller &= this->_intelligence < other._intelligence;
    is_smaller &= this->_insight < other._insight;
    is_smaller &= this->_faith < other._faith;
    is_smaller &= this->_charisma < other._charisma;

    return is_smaller;
}

bool Attributes::operator>(const Attributes& other) const {
    bool is_bigger = true;

    is_bigger &= this->_vitality > other._vitality;
    is_bigger &= this->_endurance > other._endurance;
    is_bigger &= this->_strength > other._strength;
    is_bigger &= this->_dexterity > other._dexterity;
    is_bigger &= this->_intelligence > other._intelligence;
    is_bigger &= this->_insight > other._insight;
    is_bigger &= this->_faith > other._faith;
    is_bigger &= this->_charisma > other._charisma;

    return is_bigger;
}

bool Attributes::operator<=(const Attributes& other) const {
    return this->operator<(other) || this->operator==(other);
}

bool Attributes::operator>=(const Attributes& other) const {
    return this->operator>(other) || this->operator==(other);
}

// Arithmetic

Attributes Attributes::operator+(const Attributes& other) const {
    return Attributes(
        this->_vitality + other._vitality,
        this->_endurance + other._endurance,
        this->_strength + other._strength,
        this->_dexterity + other._dexterity,
        this->_intelligence + other._intelligence,
        this->_insight + other._insight,
        this->_faith + other._faith,
        this->_charisma + other._charisma);
}

Attributes Attributes::operator-(const Attributes& other) const {
    return Attributes(
        this->_vitality - other._vitality,
        this->_endurance - other._endurance,
        this->_strength - other._strength,
        this->_dexterity - other._dexterity,
        this->_intelligence - other._intelligence,
        this->_insight - other._insight,
        this->_faith - other._faith,
        this->_charisma - other._charisma);
}

Attributes Attributes::operator*(const Attributes& other) const {
    return Attributes(
        this->_vitality * other._vitality,
        this->_endurance * other._endurance,
        this->_strength * other._strength,
        this->_dexterity * other._dexterity,
        this->_intelligence * other._intelligence,
        this->_insight * other._insight,
        this->_faith * other._faith,
        this->_charisma * other._charisma);
}

Attributes Attributes::operator/(const Attributes& other) const {
    return Attributes(
        this->_vitality / other._vitality,
        this->_endurance / other._endurance,
        this->_strength / other._strength,
        this->_dexterity / other._dexterity,
        this->_intelligence / other._intelligence,
        this->_insight / other._insight,
        this->_faith / other._faith,
        this->_charisma / other._charisma);
}

// Modifiers
void Attributes::setVitality(int new_vitality) {
    this->_vitality = new_vitality;
}

void Attributes::setEndurance(int new_endurance) {
    this->_endurance = new_endurance;
}

void Attributes::setStrength(int new_strength) {
    this->_strength = new_strength;
}

void Attributes::setDexterity(int new_dexterity) {
    this->_dexterity = new_dexterity;
}

void Attributes::setIntelligence(int new_intelligence) {
    this->_intelligence = new_intelligence;
}

void Attributes::setInsight(int new_insight) {
    this->_insight = new_insight;
}

void Attributes::setFaith(int new_faith) {
    this->_faith = new_faith;
}

void Attributes::setCharisma(int new_charisma) {
    this->_charisma = new_charisma;
}