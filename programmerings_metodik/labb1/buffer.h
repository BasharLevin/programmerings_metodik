//
// Created by Bashar Levin on 2022-11-17.
//
#include <cstdio>
#ifndef LABB1_BUFFER_H
#define LABB1_BUFFER_H
class int_buffer{
public:
    explicit int_buffer(size_t size);
    int_buffer(const int* source , size_t size);
    int_buffer(const int_buffer& rhs);
    int_buffer(int_buffer && rhs);
    void swap(int_buffer & rhs);
    int_buffer& operator=(const int_buffer& rhs);
    int_buffer& operator=(int_buffer&& rhs);
    int& operator[](size_t index);
    const int& operator[](size_t index) const;
    size_t sz()const;
    int* begin();
    int* end();
    const int* begin() const;
    const int* end() const;

private:
    int* m_beg = nullptr;
    int* m_end = nullptr;
    size_t size;
};

#endif //LABB1_BUFFER_H
