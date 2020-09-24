#pragma once
#include "../utility/Unit.h"

class Quantity
{
    long double value;
    Unit unit;

public:
    Quantity(Unit, double);
    Quantity() {}
    bool operator==(Quantity) const;
    bool operator==(Quantity *other) const;
    bool Quantity::operator!=(Quantity *other) const;
    bool Quantity::operator!=(Quantity other) const;
    Quantity operator+(Quantity);
    bool compare(Quantity);
};