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
