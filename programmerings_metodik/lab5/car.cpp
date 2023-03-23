//
// Created by Bashar Levin on 2022-12-16.
//

#include "car.h"

double Car::getSpeed() const {
    return speed;
}

const std::string &Car::getBrand() const {
    return brand;
}

Car::Car(std::string b, double spd) : brand(b), speed(spd){}

bool Car::operator==(const Car &rhs) {
    return this->brand == rhs.brand;
}



