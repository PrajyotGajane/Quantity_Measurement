#include <typeinfo>
#include "../model/Length.h"

Length::Length(Unit unit, double value)
{
    this->value = value;
    this->unit = unit;
}

bool Length::operator==(Length other) const
{
    if (this->value == other.value && typeid(this->value).name() == typeid(other.value).name())
    {
        return true;
    }
    return false;
}

bool Length::operator==(Length *other) const
{
    if (other == nullptr)
    {
        return false;
    }
    return true;
}

Length Length::operator+(Length other)
{
    Length result_quantity;

    result_quantity.value = this->value + other.value;

    result_quantity.unit = this->unit;

    return result_quantity;
}

bool Length::compare(Length that)
{
    double first_value = unit.get_base_value(this->value);
    double second_value = that.unit.get_base_value(that.value);
    return (first_value == second_value);
}
