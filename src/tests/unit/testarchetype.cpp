#include <gtest/gtest.h>
#include <archetype.h>

TEST(Archetype, CanSetAttributes) {
    Archetype archetype;

    Attributes new_attributes (1, 2, 3, 4, 5, 6, 7, 8);
    archetype.setAttributes(new_attributes);

    EXPECT_EQ(archetype.getAttributes(), new_attributes);
}