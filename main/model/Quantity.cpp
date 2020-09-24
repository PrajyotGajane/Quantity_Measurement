#include <typeinfo>
#include "../model/Quantity.h"

Quantity::Quantity(Unit unit, double value)
{
    this->value = value;
    this->unit = unit;
}

bool Quantity::operator==(Quantity other) const
{
    if (this->value == other.value && typeid(this->value).name() == typeid(other.value).name())
    {
        return true;
    }
    return false;
}

bool Quantity::operator==(Quantity *other) const
{
    if (other == nullptr)
    {
        return false;
    }
    return true;
}

Quantity Quantity::operator+(Quantity other)
{
    Quantity result_quantity;

    double added_value = this->unit.get_base_value(this->value) + other.unit.get_base_value(other.value);
    result_quantity.value = added_value;

    result_quantity.unit = this->unit;

    return result_quantity;
}

bool Quantity::compare(Quantity that)
{
    if (this->unit.unit_type == that.unit.unit_type)
    {
        double first_value = unit.get_base_value(this->value);
        double second_value = that.unit.get_base_value(that.value);
        return (first_value == second_value);
    }
    return false;
}

bool Quantity::compareTemperature(Quantity that)
{
    double first_value = 0.0;
    if (unit.unit_type == that.unit.unit_type)
    {
        first_value = unit.get_temp_base_value(value);
        double second_value = that.unit.get_base_value(that.value);
        return (first_value == second_value);
    }
    return false;
}