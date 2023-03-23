//
// Created by Bashar Levin on 2022-11-17.
//
//
//  lab1.cpp
//  lab1
//
//  Created by Bashar Levin on 2022-11-12.
//

#include "buffer.h"
#include<iostream>
int_buffer::int_buffer(size_t size) : m_beg(new int[size]), m_end(m_beg + size), size (size){};

int_buffer::int_buffer(const int* source , size_t size): m_beg(new int[size]), m_end(m_beg + size),size(size){
    for(size_t i = 0; i < size; i++)
    {
        m_beg[i] = source[i];
    }
};
int_buffer::int_buffer(const int_buffer& rhs):m_beg(rhs.m_beg),m_end(rhs.m_end),size(rhs.size){

    int_buffer temp(rhs);
    std::swap(temp.m_beg, m_beg);
    std::swap(temp.size, size);
};
int_buffer::int_buffer(int_buffer && rhs):m_beg(rhs.m_beg),m_end(rhs.m_end),size(rhs.size){

    std::swap(m_beg, rhs.m_beg);
    std::swap(m_end, rhs.m_end);
}
int_buffer & int_buffer::operator=(const int_buffer & rhs) {

    int_buffer tmp(rhs);
    swap(tmp);

    return *this;
}
int_buffer& int_buffer::operator=(int_buffer &&rhs) {

    if(this != &rhs) {

        delete[] m_beg;
        m_beg = rhs.m_beg;
        m_end = rhs.m_end;
        rhs.m_beg = nullptr;
        rhs.m_end = nullptr;
    }
    return *this;
}

void int_buffer::swap(int_buffer & rhs){

    std::swap(m_beg, rhs.m_beg);
    std::swap(m_end, rhs.m_end);
}

int* int_buffer::begin(){

    return m_beg;
};
int* int_buffer::end(){

    return m_end;
};
const int* int_buffer::begin() const{

    return m_beg;
};
const int* int_buffer::end() const{

    return m_end;
}

int &int_buffer::operator[](size_t index) {

    return m_beg[index];
}

size_t int_buffer::sz() const {

    return size;
}

const int &int_buffer::operator[](size_t index) const {

    return m_beg[index];
};

