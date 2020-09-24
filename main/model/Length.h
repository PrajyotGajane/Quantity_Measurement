#pragma once
#include "../utility/Unit.h"

class Length {

    double value;
    Unit unit;
    
public:
    Length(Unit, double);
   
    bool operator== (Length) const;
};