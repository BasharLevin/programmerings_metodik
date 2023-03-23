//
// Created by Bashar Levin on 2022-12-04.
//

#include "cylinder.h"

cylinder::cylinder(double r, double h, std::string c) : circle(r,c), height(h){}

double cylinder::getArea() {
    return circle::getArea() * 2 + (2 * Pi * height * circle::getRad());
}

