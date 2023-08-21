#include <gtest/gtest.h>
#include <entity.h>

TEST(Entity, HasDefaultId) {
    EXPECT_EQ(Entity().getId().empty(), false);
}

TEST(Entity, HasDefaultName) {
    EXPECT_EQ(Entity().getName().empty(), false);
}

TEST(Entity, HasDefaultDescription) {
    EXPECT_EQ(Entity().getDescription().empty(), false);
}

TEST(Entity, CanSetAnId) {
    Entity entity;
    std::string new_id = "An Id";

    entity.setId(new_id);

    EXPECT_EQ(entity.getId(), new_id);
}

TEST(Entity, CanSetName) {
    Entity entity;
    std::string new_name = "A Name";

    entity.setName(new_name);

    EXPECT_EQ(entity.getName(), new_name);
}

TEST(Entity, CanSetDescription) {
    Entity entity;
    std::string new_description = "A Description";

    entity.setDescription(new_description);

    EXPECT_EQ(entity.getDescription(), new_description);
}

TEST(Entity, EntitiesWithSameIdAreSameEntity) {
    Entity entity;
    Entity other_entity;
    
    entity.setId("AN_ID");
    other_entity.setId("AN_ID");

    EXPECT_EQ(entity, other_entity);
}

TEST(Entity, EntitiesWithDifferentIDAreNotSameEntity) {
    Entity entity;
    Entity other_entity;
    
    entity.setId("AN_ID");
    other_entity.setId("OTHER_ID");

    EXPECT_EQ(entity == other_entity, false);
}

TEST(Entity, EntitiesWithSameIdAreNotDifferent) {
    Entity entity;
    Entity other_entity;
    
    entity.setId("AN_ID");
    other_entity.setId("AN_ID");

    EXPECT_EQ(entity != other_entity, false);
}

TEST(Entity, EntitiesWithDifferentIdAreDifferent) {
    Entity entity;
    Entity other_entity;
    
    entity.setId("AN_ID");
    other_entity.setId("OTHER_ID");

    EXPECT_EQ(entity != other_entity, true);
}