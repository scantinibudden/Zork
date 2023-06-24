#include <gtest/gtest.h>
#include "object.h"

#define DEFAULT_NAME "name"

const Object default_object (DEFAULT_NAME);

TEST(Object, SetsNameProperly) {
    EXPECT_EQ(default_object.getName(), DEFAULT_NAME);
}

TEST(Object, HasDefaultDescription) {
    std::string expected_desc = "a name";
    EXPECT_EQ(default_object.getDescription(), expected_desc);
}

TEST(Object, SetsDescriptionProperly) {
    Object o = default_object;
    o.setDescription("description");

    EXPECT_EQ(o.getDescription(), "description");
}

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}