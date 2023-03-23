//
// Created by Bashar Levin on 2022-11-18.
//

#ifndef LABB1_SORTED_H
#define LABB1_SORTED_H
#include<cstdio>
#include "buffer.h"


class int_sorted{
    public:
        int_sorted(const int* source , size_t size);
        size_t size() const;
        void insert(int value);
        const int* begin() const;
        const int* end() const;
        int_sorted merge(const int_sorted&merge_with) const;
        int_sorted sort(const int* begin , const int* end);

    private:
        int_buffer buff;

};



#endif //LABB1_SORTED_H
