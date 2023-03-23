//
// Created by Bashar Levin on 2022-12-05.
//

#include "circle.h"

#include <utility>

circle::circle(double r, std::string c) : rad(r), shape(c){}

double circle::getArea() {
    return Pi * rad * rad;
}

double circle::getRad() {
    return rad;
}

