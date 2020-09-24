#include "../main/model/Quantity.h"
#include <gtest/gtest.h>

TEST(LengthTest, given_0_Feet_And_0_Feet_WhenCompared_ShouldBeTrue)
{
    Quantity first_zero_feet(Unit::FEET, 0.0);
    Quantity second_zero_feet(Unit::FEET, 0.0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(LengthTest, givenOneFeetAndNullFeet_ShouldReturnFalse)
{
    Quantity _one_feet(Unit::FEET, 1.0);
    ASSERT_FALSE(_one_feet == nullptr);
}

TEST(LengthTest, givenSameReferenceForFeet_WhenEqual_ShouldReturnTrue)
{
    Quantity *first_feet_ref = new Quantity(Unit::FEET, 1.0);
    Quantity *second_feet_ref = first_feet_ref;
    ASSERT_EQ(first_feet_ref, second_feet_ref);
}

TEST(LengthTest, givenSameTypeForFeet_WhenEqual_ShouldReturnTrue)
{
    Quantity first_type(Unit::FEET, 1.0);
    Quantity second_type(Unit::FEET, 1.0);
    ASSERT_TRUE(first_type == second_type);
}

TEST(LengthTest, givenSameFeetValue_whenCompare_ShouldReturnTrue)
{
    Quantity first_feet_value(Unit::FEET, 1.0);
    Quantity second_feet_value(Unit::FEET, 1.0);
    ASSERT_TRUE(first_feet_value == second_feet_value);
}

TEST(LengthTest, givenDifferentFeetValue_whenCompare_ShouldReturnFalse)
{
    Quantity first_feet_value(Unit::FEET, 1.0);
    Quantity second_feet_value(Unit::FEET, 2.0);
    ASSERT_FALSE(first_feet_value == second_feet_value);
}

TEST(LengthTest, given_0_Inch_And_0_Inch_WhenCompare_ShouldReturnTrue)
{
    Quantity first_zero_inch(Unit::INCH, 0.0);
    Quantity second_zero_inch(Unit::INCH, 0.0);
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

TEST(LengthTest, givenOneInchAndNullInch_ShouldReturnFalse)
{
    Quantity _one_inch(Unit::INCH, 1.0);
    ASSERT_FALSE(_one_inch == nullptr);
}

TEST(LengthTest, givenSameReferenceForInch_WhenEqual_ShouldReturnTrue)
{
    Quantity *first_inch_ref = new Quantity(Unit::INCH, 1.0);
    Quantity *second_inch_ref = first_inch_ref;
    ASSERT_EQ(first_inch_ref, second_inch_ref);
}

TEST(LengthTest, givenSameTypeForInch_WhenEqual_ShouldReturnTrue)
{
    Quantity first_inch_type(Unit::INCH, 1.0);
    Quantity second_inch_type(Unit::INCH, 1.0);
    ASSERT_TRUE(first_inch_type == second_inch_type);
}

TEST(LengthTest, givenDifferentInchValue_whenCompare_ShouldReturnFalse)
{
    Quantity first_inch_value(Unit::INCH, 1.0);
    Quantity second_inch_value(Unit::INCH, 2.0);
    ASSERT_FALSE(first_inch_value == second_inch_value);
}

TEST(LengthTest, givenSameInchValue_whenCompare_ShouldReturnTrue)
{
    Quantity first_inch_value(Unit::INCH, 1.0);
    Quantity second_inch_value(Unit::INCH, 1.0);
    ASSERT_TRUE(first_inch_value == second_inch_value);
}

TEST(LengthTest, given_1_Feet_And_12_Inch_whenCompare_ShouldReturnTrue)
{
    Quantity feet_value(Unit::FEET, 1.0);
    Quantity inch_value(Unit::INCH, 12.0);
    ASSERT_TRUE(feet_value.compare(inch_value));
}

TEST(LengthTest, given_1_Feet_And_1_Inch_whenCompare_ShouldReturnFalse)
{
    Quantity feet_value(Unit::FEET, 1.0);
    Quantity inch_value(Unit::INCH, 1.0);
    ASSERT_FALSE(feet_value.compare(inch_value));
}

TEST(LengthTest, given_3_Feet_And_1_Yard_WhenCompare_ShouldReturnTrue)
{
    Quantity feet_value(Unit::FEET, 3.0);
    Quantity yard_value(Unit::YARD, 1.0);
    ASSERT_TRUE(feet_value.compare(yard_value));
}

TEST(LengthTest, given_1_Feet_And_1_Yard_WhenCompare_ShouldReturnFalse)
{
    Quantity feet_value(Unit::FEET, 1.0);
    Quantity yard_value(Unit::YARD, 1.0);
    ASSERT_FALSE(feet_value.compare(yard_value));
}

TEST(LengthTest, given_1_Inch_And_1_Yard_WhenCompare_ShouldReturnFalse)
{
    Quantity inch_value(Unit::INCH, 1.0);
    Quantity yard_value(Unit::YARD, 1.0);
    ASSERT_FALSE(inch_value.compare(yard_value));
}

TEST(LengthTest, given_1_Yard_And_36_Inch_WhenCompare_ShouldReturnTrue)
{
    Quantity yard_value(Unit::YARD, 1.0);
    Quantity inch_value(Unit::INCH, 36.0);
    ASSERT_TRUE(yard_value.compare(inch_value));
}

TEST(LengthTest, given_36_Inch_And_1_Yard_WhenCompare_ShouldReturnTrue)
{
    Quantity inch_value(Unit::INCH, 36.0);
    Quantity yard_value(Unit::YARD, 1.0);
    ASSERT_TRUE(inch_value.compare(yard_value));
}

TEST(LengthTest, given_1_Yard_And_3_Feet_WhenCompare_ShouldReturnTrue)
{
    Quantity yard_value(Unit::YARD, 1.0);
    Quantity inch_value(Unit::FEET, 3.0);
    ASSERT_TRUE(yard_value.compare(inch_value));
}

TEST(LengthTest, given_2_Inch_And_5_Cm_WhenCompare_ShouldReturnTrue)
{
    Quantity inch_value(Unit::INCH, 2.0);
    Quantity centimeter_value(Unit::CENTIMETER, 5.0);
    ASSERT_TRUE(inch_value.compare(centimeter_value));
}

TEST(LengthTest, given_1_Inch_And_1_Cm_WhenCompare_ShouldReturnFalse)
{
    Quantity inch_value(Unit::INCH, 1.0);
    Quantity centimeter_value(Unit::CENTIMETER, 1.0);
    ASSERT_FALSE(inch_value.compare(centimeter_value));
}

TEST(LengthTest, given_2_inch_and_2_inch_WhenAdded__should_return_4_inch)
{
    Quantity first_inch(Unit::INCH, 2.0);
    Quantity second_inch(Unit::INCH, 2.0);
    Quantity total_inch(Unit::INCH, 4.0);
    ASSERT_EQ(total_inch, first_inch + second_inch);
}

TEST(LengthTest, given_1_feet_and_2_inch_WhenAdded__should_return_14_inch)
{
    Quantity _1_feet(Unit::FEET, 1.0);
    Quantity _2_inch(Unit::INCH, 2.0);
    Quantity total_inch(Unit::INCH, 14.0);
    ASSERT_EQ(total_inch, _2_inch + _1_feet);
}

TEST(LengthTest, given_1_feet_and_1_feet_WhenAdded__should_return_24_inch)
{
    Quantity _1_feet_one(Unit::FEET, 1.0);
    Quantity _1_feet_second(Unit::FEET, 1.0);
    Quantity total_inch(Unit::INCH, 24.0);
    ASSERT_EQ(total_inch, _1_feet_one + _1_feet_second);
}

TEST(LengthTest, given_2_inch_and_2_5_cm_WhenAdded__should_return_3_inch)
{
    Quantity _2_inch(Unit::INCH, 2.0);
    Quantity _2_5_CM(Unit::CENTIMETER, 2.5);
    Quantity total_inch(Unit::INCH, 3.0);
    ASSERT_EQ(total_inch, _2_inch + _2_5_CM);
}

TEST(VolumeTest, given_1_Gallon_And_Litre_WhenCompare_ShouldReturnTrue)
{
    Quantity gallon_value(Unit::GALLON, 1.0);
    Quantity litre_value(Unit::LITRE, 3.78);
    ASSERT_TRUE(gallon_value.compare(litre_value));
}

TEST(VolumeTest, given_1_Gallon_And_1_FEET_WhenCompare_ShouldReturnFalse)
{
    Quantity gallon_value(Unit::GALLON, 1.0);
    Quantity feet_value(Unit::FEET, 1.0);
    ASSERT_FALSE(gallon_value.compare(feet_value));
}

TEST(VolumeTest, given_1_Litre_And_1000_ML_WhenCompare_ShouldReturnTrue)
{
    Quantity gallon_value(Unit::GALLON, 1.0);
    Quantity ml_value(Unit::MILLILITRE, 1.0);
    ASSERT_FALSE(gallon_value.compare(ml_value));
}

TEST(VolumeTest, given_1_Gallon_And_3_78_Litre_WhenAdded_ShouldReturn_7_56_Litres)
{
    Quantity gallon_value(Unit::GALLON, 1.0);
    Quantity litre_value(Unit::LITRE, 3.78);
    Quantity total_value(Unit::LITRE, 7.56);
    ASSERT_EQ(total_value, litre_value + gallon_value);
}

TEST(VolumeTest, given_1_Litre_And_1000_ML_WhenAdded_ShouldReturn_2_Litres)
{
    Quantity litre_value(Unit::LITRE, 1.0);
    Quantity ml_value(Unit::MILLILITRE, 1000.0);
    Quantity total_value(Unit::LITRE, 2.0);
    ASSERT_EQ(total_value, litre_value + ml_value);
}

TEST(WeightTest, given_1_Kg_And_1000_grams_WhenCompare_ShouldReturnTrue)
{
    Quantity kg_value(Unit::KILOGRAM, 1.0);
    Quantity gram_value(Unit::GRAM, 1000.0);
    ASSERT_TRUE(kg_value.compare(gram_value));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}