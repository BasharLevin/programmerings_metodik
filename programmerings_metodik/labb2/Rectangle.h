//
// Created by Bashar Levin on 2022-12-04.
//

#ifndef LABB2_RECTANGLE_H
#define LABB2_RECTANGLE_H
#include "shape.h"


class Rectangle : public shape{
public:
    explicit Rectangle(double w = 0.0, double h=0.0, std::string c = "");
    double getArea() override;

    double width, height;
    double getWidth();
    double getHeight();
};


#endif //LABB2_RECTANGLE_H
