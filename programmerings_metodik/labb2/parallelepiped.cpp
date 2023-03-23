//
// Created by Bashar Levin on 2022-12-04.
//

#include "parallelepiped.h"

#include <utility>

parallelepiped::parallelepiped(double h, double w, double d, std::string c) : Rectangle(w,h,c) , depth(d) {}

double parallelepiped::getArea() {
    Rectangle r1(getHeight(),depth,getColor());
    Rectangle r2(getWidth(), depth, getColor());
    return 2 * (Rectangle::getArea()+r1.getArea()+r2.getArea());
}



