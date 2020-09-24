#pragma once
#include "../utility/Unit.h"

class Length
{
    double value;
    Unit unit;

public:
    Length(Unit, double);
    Length(){}
    bool operator==(Length) const;
    bool operator==(Length *other) const;
    Length operator+(Length);
    bool compare(Length);
};