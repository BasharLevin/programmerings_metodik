//
// Created by Bashar Levin on 2022-12-04.
//

#include "RoundedRectangle.h"

RoundedRectangle::RoundedRectangle(double w, double h, double r, std::string c) : Rectangle(w,h,c) ,rad(r){}


double RoundedRectangle::getArea(){
    circle add(rad,getColor());
    return Rectangle::getArea() - rad*rad * (4 - circle::Pi);
    //return Rectangle::getArea() - (4*rad*rad-add.getArea());
}


