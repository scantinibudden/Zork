#include <gtest/gtest.h>
#include <attributes.h>

//// Constructor

TEST(Attributes, StartWithCeroVitality) {
    EXPECT_EQ(Attributes().getVitality(), 0);
}

TEST(Attributes, StartWithCeroEndurance) {
    EXPECT_EQ(Attributes().getEndurance(), 0);
}

TEST(Attributes, StartWithCeroStrength) {
    EXPECT_EQ(Attributes().getStrength(), 0);
}

TEST(Attributes, StartWithCeroDexterity) {
    EXPECT_EQ(Attributes().getDexterity(), 0);
}

TEST(Attributes, StartWithCeroIntelligence) {
    EXPECT_EQ(Attributes().getIntelligence(), 0);
}

TEST(Attributes, StartWithCeroInsight) {
    EXPECT_EQ(Attributes().getInsight(), 0);
}

TEST(Attributes, StartWithCeroFaith) {
    EXPECT_EQ(Attributes().getFaith(), 0);
}

TEST(Attributes, StartWithCeroCharisma) {
    EXPECT_EQ(Attributes().getCharisma(), 0);
}

//// Modifiers

TEST(Attributes, CanSetVitality) {
    Attributes attributes;
    attributes.setVitality(2);

    EXPECT_EQ(attributes.getVitality(), 2);
}

TEST(Attributes, CanSetEndurance) {
    Attributes attributes;
    attributes.setEndurance(2);

    EXPECT_EQ(attributes.getEndurance(), 2);
}

TEST(Attributes, CanSetStrength) {
    Attributes attributes;
    attributes.setStrength(2);

    EXPECT_EQ(attributes.getStrength(), 2);
}

TEST(Attributes, CanSetDexterity) {
    Attributes attributes;
    attributes.setDexterity(2);

    EXPECT_EQ(attributes.getDexterity(), 2);
}

TEST(Attributes, CanSetIntelligence) {
    Attributes attributes;
    attributes.setIntelligence(2);

    EXPECT_EQ(attributes.getIntelligence(), 2);
}

TEST(Attributes, CanSetInsight) {
    Attributes attributes;
    attributes.setInsight(2);

    EXPECT_EQ(attributes.getInsight(), 2);
}

TEST(Attributes, CanSetFaith) {
    Attributes attributes;
    attributes.setFaith(2);

    EXPECT_EQ(attributes.getFaith(), 2);
}

TEST(Attributes, CanSetCharisma) {
    Attributes attributes;
    attributes.setCharisma(2);

    EXPECT_EQ(attributes.getCharisma(), 2);
}

//// Logical

// ==

TEST(Attributes, AttributesWithSameValuesAreEqual) {
    Attributes attributes;
    Attributes other_attributes;

    EXPECT_EQ(attributes == other_attributes, true);
}

TEST(Attributes, AttributesAreNotEqualWithDifferentVitality) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setVitality(2);

    EXPECT_EQ(attributes == other_attributes, false);
}

TEST(Attributes, AttributesAreNotEqualWithDifferentEndurance) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setEndurance(2);

    EXPECT_EQ(attributes == other_attributes, false);
}

TEST(Attributes, AttributesAreNotEqualWithDifferentStrength) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setStrength(2);

    EXPECT_EQ(attributes == other_attributes, false);
}

TEST(Attributes, AttributesAreNotEqualWithDifferentDexterity) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setDexterity(2);

    EXPECT_EQ(attributes == other_attributes, false);
}

TEST(Attributes, AttributesAreNotEqualWithDifferentIntelligence) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setIntelligence(2);

    EXPECT_EQ(attributes == other_attributes, false);
}

TEST(Attributes, AttributesAreNotEqualWithDifferentInsight) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setInsight(2);

    EXPECT_EQ(attributes == other_attributes, false);
}

TEST(Attributes, AttributesAreNotEqualWithDifferentFaith) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setFaith(2);

    EXPECT_EQ(attributes == other_attributes, false);
}

TEST(Attributes, AttributesAreNotEqualWithDifferentCharisma) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setCharisma(2);

    EXPECT_EQ(attributes == other_attributes, false);
}

// !=

TEST(Attributes, AttributesWithSameValuesAreNotDifferent) {
    Attributes attributes;
    Attributes other_attributes;

    EXPECT_EQ(attributes != other_attributes, false);
}

TEST(Attributes, AttributesAreDifferentWithDifferentVitality) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setVitality(2);

    EXPECT_EQ(attributes != other_attributes, true);
}

TEST(Attributes, AttributesAreDifferentWithDifferentEndurance) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setEndurance(2);

    EXPECT_EQ(attributes != other_attributes, true);
}

TEST(Attributes, AttributesAreDifferentWithDifferentStrength) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setStrength(2);

    EXPECT_EQ(attributes != other_attributes, true);
}

TEST(Attributes, AttributesAreDifferentWithDifferentDexterity) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setDexterity(2);

    EXPECT_EQ(attributes != other_attributes, true);
}

TEST(Attributes, AttributesAreDifferentWithDifferentIntelligence) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setIntelligence(2);

    EXPECT_EQ(attributes != other_attributes, true);
}

TEST(Attributes, AttributesAreDifferentWithDifferentInsight) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setInsight(2);

    EXPECT_EQ(attributes != other_attributes, true);
}

TEST(Attributes, AttributesAreDifferentWithDifferentFaith) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setFaith(2);

    EXPECT_EQ(attributes != other_attributes, true);
}

TEST(Attributes, AttributesAreDifferentWithDifferentCharisma) {
    Attributes attributes;
    Attributes other_attributes;

    attributes.setCharisma(2);

    EXPECT_EQ(attributes != other_attributes, true);
}

// <

TEST(Attributes, AttributesAreSmallerWhenAllValuesAreSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 2, 2, 2, 2, 2, 2, 2);

    EXPECT_EQ(attributes < other_attributes, true);
}

TEST(Attributes, AttributesAreNotSmallerWhenVitalityIsNotSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (1, 2, 2, 2, 2, 2, 2, 2);

    EXPECT_EQ(attributes < other_attributes, false);
}

TEST(Attributes, AttributesAreNotSmallerWhenEnduranceIsNotSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 1, 2, 2, 2, 2, 2, 2);

    EXPECT_EQ(attributes < other_attributes, false);
}

TEST(Attributes, AttributesAreNotSmallerWhenStrengthIsNotSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 2, 1, 2, 2, 2, 2, 2);

    EXPECT_EQ(attributes < other_attributes, false);
}

TEST(Attributes, AttributesAreNotSmallerWhenDexterityIsNotSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 2, 2, 1, 2, 2, 2, 2);

    EXPECT_EQ(attributes < other_attributes, false);
}

TEST(Attributes, AttributesAreNotSmallerWhenIntelligenceIsNotSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 2, 2, 2, 1, 2, 2, 2);

    EXPECT_EQ(attributes < other_attributes, false);
}

TEST(Attributes, AttributesAreNotSmallerWhenInsightIsNotSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 2, 2, 2, 2, 1, 2, 2);

    EXPECT_EQ(attributes < other_attributes, false);
}

TEST(Attributes, AttributesAreNotSmallerWhenFaithIsNotSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 2, 2, 2, 2, 2, 1, 2);

    EXPECT_EQ(attributes < other_attributes, false);
}

TEST(Attributes, AttributesAreNotSmallerWhenCharismaIsNotSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 2, 2, 2, 2, 2, 2, 1);

    EXPECT_EQ(attributes < other_attributes, false);
}

// >

TEST(Attributes, AttributesAreBiggerWhenAllValuesAreBigger) {
    Attributes attributes (2, 2, 2, 2, 2, 2, 2, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, true);
}

TEST(Attributes, AttributesAreNotBiggerWhenVitalityIsNotBigger) {
    Attributes attributes (1, 2, 2, 2, 2, 2, 2, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, false);
}

TEST(Attributes, AttributesAreNotBiggerWhenEnduranceIsNotBigger) {
    Attributes attributes (2, 1, 2, 2, 2, 2, 2, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, false);
}

TEST(Attributes, AttributesAreNotBiggerWhenStrengthIsNotBigger) {
    Attributes attributes (2, 2, 1, 2, 2, 2, 2, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, false);
}

TEST(Attributes, AttributesAreNotBiggerWhenDexterityIsNotBigger) {
    Attributes attributes (2, 2, 2, 1, 2, 2, 2, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, false);
}

TEST(Attributes, AttributesAreNotBiggerWhenIntelligenceIsNotBigger) {
    Attributes attributes (2, 2, 2, 2, 1, 2, 2, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, false);
}

TEST(Attributes, AttributesAreNotBiggerWhenInsightIsNotBigger) {
    Attributes attributes (2, 2, 2, 2, 2, 1, 2, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, false);
}

TEST(Attributes, AttributesAreNotBiggerWhenFaithIsNotBigger) {
    Attributes attributes (2, 2, 2, 2, 2, 2, 1, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, false);
}

TEST(Attributes, AttributesAreNotBiggerWhenCharismaIsNotBigger) {
    Attributes attributes (2, 2, 2, 2, 2, 2, 2, 1);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes > other_attributes, false);
}

// <=

TEST(Attributes, AttributesAreSmallerOrEqualWhenTheyAreSmaller) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (2, 2, 2, 2, 2, 2, 2, 2);

    EXPECT_EQ(attributes <= other_attributes, true);
}

TEST(Attributes, AttributesAreSmallerOrEqualWhenTheyAreEqual) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes <= other_attributes, true);
}

TEST(Attributes, AttributesAreNotSmallerOrEqualWhenNotAllValuesAreEqualOrSmaller) {
    Attributes attributes (1, 1, 1, 2, 1, 1, 1, 1);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes <= other_attributes, false);
}

// >=

TEST(Attributes, AttributesAreBiggerOrEqualWhenTheyAreBigger) {
    Attributes attributes (2, 2, 2, 2, 2, 2, 2, 2);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes >= other_attributes, true);
}

TEST(Attributes, AttributesAreBiggerOrEqualWhenTheyAreEqual) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_EQ(attributes >= other_attributes, true);
}

TEST(Attributes, AttributesAreNotBiggerOrEqualWhenNotAllValuesAreEqualOrBigger) {
    Attributes attributes (1, 1, 1, 1, 1, 1, 1, 1);
    Attributes other_attributes (1, 1, 1, 2, 1, 1, 1, 1);

    EXPECT_EQ(attributes >= other_attributes, false);
}

//// Arithmetic

// +

TEST(Attributes, AdditionIsDoneStatByStat) {
    Attributes attributes (1, 2, 3, 4, 5, 6, 7, 8);
    Attributes other_attributes (8, 7, 6, 5, 4, 3, 2, 1);
    Attributes expected_attributes (9, 9, 9, 9, 9, 9, 9, 9);

    EXPECT_EQ(attributes + other_attributes, expected_attributes);
}

// -

TEST(Attributes, SubtractionIsDoneStatByStat) {
    Attributes attributes (9, 9, 9, 9, 9, 9, 9, 9);
    Attributes other_attributes (1, 2, 3, 4, 5, 6, 7, 8);
    Attributes expected_attributes (8, 7, 6, 5, 4, 3, 2, 1);

    EXPECT_EQ(attributes - other_attributes, expected_attributes);
}

// *

TEST(Attributes, MultiplicationIsDoneStatByStat) {
    Attributes attributes (1, 2, 3, 4, 5, 6, 7, 8);
    Attributes other_attributes (5, 6, 7, 8, 4, 3, 2, 1);
    Attributes expected_attributes (5, 12, 21, 32, 20, 18, 14, 8);

    EXPECT_EQ(attributes * other_attributes, expected_attributes);
}

// /

TEST(Attributes, DivisionIsDoneStatByStat) {
    Attributes attributes (2, 4, 6, 8, 10, 12, 14, 16);
    Attributes other_attributes (2, 4, 3, 1, 5, 6, 14, 2);
    Attributes expected_attributes (1, 1, 2, 8, 2, 2, 1, 8);

    EXPECT_EQ(attributes / other_attributes, expected_attributes);
}