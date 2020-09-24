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

bool Quantity::operator!=(Quantity *other) const
{
    return !(this == other);
}

bool Quantity::operator!=(Quantity other) const
{
    return !(*this == other);
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
