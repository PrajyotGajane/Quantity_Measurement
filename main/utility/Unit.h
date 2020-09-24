#pragma once
#include <iostream>
#include <typeinfo>

class Unit {

    double base_conversion_factor;

    Unit(double base_conversion_factor);
    
    public:
        Unit();
        static Unit FEET;
        static Unit INCH;
};