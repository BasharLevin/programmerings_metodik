//
// Created by Bashar Levin on 2022-12-04.
//

#ifndef LABB2_CIRCLE_H
#define LABB2_CIRCLE_H
#include "shape.h"

class circle : public shape{
public:
    explicit circle(double r = 0.0, std::string c = "");
    double rad;
    constexpr static const double Pi = 3.14159;
    double getArea() override;
    double getRad();
};


#endif //LABB2_CIRCLE_H
