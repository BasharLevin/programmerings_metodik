//
// Created by Bashar Levin on 2022-12-16.
//

#ifndef LAB5_MYPRINT_H
#define LAB5_MYPRINT_H
#include "car.h"

class myPrint {
public:
    void operator()(const Car& car) const;
};


#endif //LAB5_MYPRINT_H
