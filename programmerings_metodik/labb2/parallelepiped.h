//
// Created by Bashar Levin on 2022-12-04.
//

#ifndef LABB2_PARALLELEPIPED_H
#define LABB2_PARALLELEPIPED_H
#include "Rectangle.h"

class parallelepiped : public Rectangle{
public:
    parallelepiped(double h, double w, double d, std::string c);
    double getArea()override;
    double depth;

};


#endif //LABB2_PARALLELEPIPED_H
