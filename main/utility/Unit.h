#pragma once
#include "UnitType.h"
#include <iostream>
#include <typeinfo>

class Unit
{

    double base_conversion_factor;
    Unit(double,UnitType);

public:
    Unit();
    UnitType unit_type;
    double get_base_value(double);
    static Unit FEET;
    static Unit INCH;
    static Unit YARD;
    static Unit CENTIMETER;
    static Unit GALLON;
    static Unit LITRE;
};