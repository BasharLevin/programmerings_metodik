//
// Created by Bashar Levin on 2022-12-16.
//

#include "myPrint.h"

void myPrint::operator()(const Car &car) const {
std::cout<<"Car brand: "<<car.getBrand()<<", Car's top speed: "<<car.getSpeed()<<std::endl;
}
