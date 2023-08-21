#include <gtest/gtest.h>
#include <character.h>

TEST(Character, HasDefaultId) {
    EXPECT_EQ(Character().getId().empty(), false);
}

TEST(Character, HasDefaultName) {
    EXPECT_EQ(Character().getName().empty(), false);
}

TEST(Character, HasDefaultDescription) {
    EXPECT_EQ(Character().getDescription().empty(), false);
}

TEST(Character, StartsAtMaxHealth) {
    Character character;

    EXPECT_EQ(character.getHealth(), character.getMaxHealth());
}

TEST(Character, CanSetMaxHealth) {
    Character character;

    int new_max_health = character.getMaxHealth() + 100;
    character.setMaxHealth(new_max_health);

    EXPECT_EQ(character.getMaxHealth(), new_max_health);
}

TEST(Character, IncreasingMaxHealthDoesNotIncreaseHealth) {
    Character character;

    int current_health = character.getHealth();
    int new_max_health = character.getMaxHealth() + 100;
    character.setMaxHealth(new_max_health);

    EXPECT_EQ(character.getHealth(), current_health);
}

TEST(Character, DecreasingMaxHealthDoesDecreaseHealth) {
    Character character;
    int new_max_health = character.getMaxHealth() - 1;
    character.setMaxHealth(new_max_health);

    EXPECT_EQ(character.getHealth(), new_max_health);
}

TEST(Character, CanNotSetMaxHealthUnderOne) {
    Character character;
    character.setMaxHealth(0);

    EXPECT_EQ(character.getMaxHealth(), 1);
}

TEST(Character, CanSetHealth) {
    Character character;
    
    int new_health = character.getMaxHealth() - 1;
    character.setHealth(new_health);

    EXPECT_EQ(character.getHealth(), new_health);
}

TEST(Character, CanNotSetHealthUnderCero) {
    Character character;
    
    character.setHealth(-1);

    EXPECT_EQ(character.getHealth(), 0);
}

TEST(Character, CanNotSetHealthAboveMaxHealth) {
    Character character;
    
    character.setHealth(character.getMaxHealth() + 100);

    EXPECT_EQ(character.getHealth(), character.getMaxHealth());
}

TEST(Character, CanSetAttributes) {
    Character character;
    Attributes attributes (1, 2, 3, 4, 5, 6, 7, 8);

    character.setAttributes(attributes);


    EXPECT_EQ(character.getAttributes(), attributes);
}

TEST(Character, CanSetClass) {
    Character character;
    Archtype character_class;

    character_class.setId("AC-000");

    character.setClass(character_class);


    EXPECT_EQ(character.getClass(), character_class);
}

TEST(Character, CanSetRace) {
    Character character;
    Archtype character_race;

    character_race.setId("AR-000");

    character.setRace(character_race);


    EXPECT_EQ(character.getRace(), character_race);
}