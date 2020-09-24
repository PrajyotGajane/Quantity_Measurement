#pragma once
#include <iostream>
#include <typeinfo>

class Unit
{

    double base_conversion_factor;

    Unit(double base_conversion_factor);

public:
    Unit();
    double get_base_value(double);
    static Unit FEET;
    static Unit INCH;
    static Unit YARD;
    static Unit CENTIMETER;
};