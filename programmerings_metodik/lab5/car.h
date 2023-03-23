//
// Created by Bashar Levin on 2022-12-16.
//

#include <iostream>
#ifndef LAB5_CAR_H
#define LAB5_CAR_H


class Car {
public:
    Car(std::string b = "", double spd = 0.0);
    bool operator == (const Car& rhs);
    const std::string &getBrand() const;
    double getSpeed() const;
private:
    double speed = 0.0;
    std::string brand;
};


#endif //LAB5_CAR_H
