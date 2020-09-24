#include "Unit.h"

Unit::Unit() {}

Unit::Unit(double base_conversion_factor, UnitType type)
{
    this->base_conversion_factor = base_conversion_factor;
    this->unit_type = type;
}

double Unit::get_base_value(double value)
{
    return (this->base_conversion_factor * value);
}

Unit Unit::FEET(12, LENGTH);
Unit Unit::INCH(1, LENGTH);
Unit Unit::YARD(36, LENGTH);
Unit Unit::CENTIMETER(0.4, LENGTH);
Unit Unit::GALLON(3.78, VOLUME);
Unit Unit::LITRE(1, VOLUME);
Unit Unit::MILLILITRE(0.001, VOLUME);
Unit Unit::KILOGRAM(1, WEIGHT);
Unit Unit::GRAM(0.001, WEIGHT);
Unit Unit::TONNE(1000, WEIGHT);
