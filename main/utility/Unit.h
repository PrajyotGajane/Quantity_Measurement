#pragma once
#include <iostream>

class Unit {

    double base_conversion_factor;

    Unit(double base_conversion_factor);
    
    public:
        Unit();
        static Unit FEET;
};