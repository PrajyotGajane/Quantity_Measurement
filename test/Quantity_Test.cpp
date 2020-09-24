#include "../main/model/Length.h"
#include <gtest/gtest.h>

TEST(LengthTest, given_0_Feet_And_0_Feet_WhenCompared_ShouldBeTrue) { 
    Length first_zero_feet(Unit::FEET, 0.0); 
    Length second_zero_feet(Unit::FEET, 0.0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}