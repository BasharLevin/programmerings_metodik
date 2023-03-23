//
// Created by Bashar Levin on 2022-12-05.
//

#include "shape.h"



shape::~shape() {

}

shape::shape(std::string color) : color(color){

}

std::string shape::getColor() {
    return color;
}
