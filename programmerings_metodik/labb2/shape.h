//
// Created by Bashar Levin on 2022-12-05.
//
#include<iostream>


#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H


class shape {
private:
    std::string color;
    double area = 0;
public:
    virtual ~shape();
    explicit shape(std::string color);
    virtual std::string getColor();
    virtual double getArea() =0;

};


#endif //LABB2_SHAPE_H
