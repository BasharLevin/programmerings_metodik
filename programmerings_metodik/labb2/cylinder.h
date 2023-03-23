//
// Created by Bashar Levin on 2022-12-04.
//

#ifndef LABB2_CYLINDER_H
#define LABB2_CYLINDER_H
#include "circle.h"

class cylinder : public circle{
public:
    cylinder(double r, double h, std::string c);
    double getArea() override;
    double height;

};


#endif //LABB2_CYLINDER_H
