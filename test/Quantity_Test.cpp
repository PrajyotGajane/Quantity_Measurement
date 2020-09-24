#include "../main/model/Length.h"
#include <gtest/gtest.h>

TEST(LengthTest, given_0_Feet_And_0_Feet_WhenCompared_ShouldBeTrue) { 
    Length first_zero_feet(Unit::FEET, 0.0); 
    Length second_zero_feet(Unit::FEET, 0.0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(LengthTest, givenOneFeetAndNullFeet_ShouldReturnFalse) {
    Length _one_feet(Unit::FEET, 1.0);
    ASSERT_FALSE(_one_feet == nullptr);
}

TEST(LengthTest, givenSameReferenceForFeet_WhenEqual_ShouldReturnTrue) {
    Length *first_feet_ref = new Length(Unit::FEET, 1.0);
    Length *second_feet_ref = first_feet_ref;
    ASSERT_EQ(first_feet_ref, second_feet_ref);
}

TEST(LengthTest, givenSameTypeForFeet_WhenEqual_ShouldReturnTrue) {
    Length first_type(Unit::FEET, 1.0);
    Length second_type(Unit::FEET, 1.0);
    ASSERT_TRUE(first_type == second_type);
}

TEST(LengthTest, givenSameFeetValue_whenCompare_ShouldReturnTrue) {
    Length first_feet_value(Unit::FEET, 1.0);
    Length second_feet_value(Unit::FEET, 1.0);
    ASSERT_TRUE(first_feet_value == second_feet_value);
}

TEST(LengthTest, givenDifferentFeetValue_whenCompare_ShouldReturnFalse) {
    Length first_feet_value(Unit::FEET, 1.0);
    Length second_feet_value(Unit::FEET, 2.0);
    ASSERT_FALSE(first_feet_value == second_feet_value);
}

TEST(LengthTest, given_0_Inch_And_0_Inch_WhenCompare_ShouldReturnTrue) { 
    Length first_zero_inch(Unit::INCH, 0.0); 
    Length second_zero_inch(Unit::INCH, 0.0);
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}