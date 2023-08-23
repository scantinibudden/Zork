#include <gtest/gtest.h>
#include <weapon.h>

TEST(Weapon, CanSetAttack) {
    Weapon weapon;

    int new_attack = 10;
    weapon.setAttack(new_attack);

    EXPECT_EQ(weapon.getAttack(), new_attack);
}

TEST(Weapon, CanSetRequirements) {
    Weapon weapon;

    Attributes new_requirements (1, 2, 3, 4, 5, 6, 7, 8);
    weapon.setRequirements(new_requirements);

    EXPECT_EQ(weapon.getRequirements(), new_requirements);
}

TEST(Weapon, CanSetDamageType) {
    Weapon weapon;

    Entity new_damage_type;
    new_damage_type.setId("DT-0");
    weapon.setDamageType(new_damage_type);

    EXPECT_EQ(weapon.getDamageType(), new_damage_type);
}