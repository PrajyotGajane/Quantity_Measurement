#include <typeinfo>
#include "../model/Length.h"

Length::Length(Unit unit, double value)
{
    this->value = value;
    this->unit = unit;
}

bool Length::operator==(Length other) const
{
    if (this->value == other.value)
    {
        return true;
    }
    return false;
}
