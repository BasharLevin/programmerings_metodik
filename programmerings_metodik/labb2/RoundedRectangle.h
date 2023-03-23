//
// Created by Bashar Levin on 2022-12-04.
//

#ifndef LABB2_ROUNDEDRECTANGLE_H
#define LABB2_ROUNDEDRECTANGLE_H
#include "Rectangle.h"
#include "circle.h"

class RoundedRectangle : public Rectangle {
public:
    explicit RoundedRectangle(double w = 0.0, double h = 0.0, double r = 0, std::string c = "" );
    double getArea() override;
    double rad;
};


#endif //LABB2_ROUNDEDRECTANGLE_H
