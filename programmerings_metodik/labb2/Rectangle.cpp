//
// Created by Bashar Levin on 2022-12-04.
//

#include "Rectangle.h"

#include <utility>

Rectangle::Rectangle(double w, double h, std::string c ): height(h) , width(w), shape(c) {}

double Rectangle::getArea()  {
    return width * height;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::getHeight() {
    return height;
}

