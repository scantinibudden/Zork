#include <gtest/gtest.h>
#include <gameobject.h>


// Defines

#define OBJECT_DEFAULT_NAME "GameObject"
#define OBJECT_ALTERNATIVE_NAME "Alternative Name"

#define CHARACTER_DEFAULT_NAME "Character"
#define CHARACTER_STARTING_LEVEL 1


////////////////// Object

// Identity

TEST(GameObjectIdentity, IsCharacterIsFalse) {
  EXPECT_EQ(GameObject().isCharacter(), false);
}

// Name

TEST(GameObjectName, HasDefaultName) {
  EXPECT_EQ(GameObject().getName(), OBJECT_DEFAULT_NAME);
}

TEST(GameObjectName, CanChangeName) {
  GameObject object;
  object.setName(OBJECT_ALTERNATIVE_NAME);

  EXPECT_EQ(object.getName(), OBJECT_ALTERNATIVE_NAME);
}

////////////////// Main

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}