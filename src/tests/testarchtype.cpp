#include <gtest/gtest.h>
#include <archtype.h>

TEST(Archtype, HasDefaultId) {
    EXPECT_EQ(Archtype().getId().empty(), false);
}

TEST(Archtype, HasDefaultName) {
    EXPECT_EQ(Archtype().getName().empty(), false);
}

TEST(Archtype, HasDefaultDescription) {
    EXPECT_EQ(Archtype().getDescription().empty(), false);
}

TEST(Archtype, HasDefaultAttributes) {
    EXPECT_EQ(Archtype().getAttributes(), Attributes());
}

TEST(Archtype, CanSetAttributes) {
    Archtype archtype;
    Attributes attributes (1,3,2,4,5,6,7,4);

    archtype.setAttributes(attributes);

    EXPECT_EQ(archtype.getAttributes(), attributes);
}