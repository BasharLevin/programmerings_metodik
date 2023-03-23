//
// Created by Bashar Levin on 2022-11-18.
//

#include <cstddef>
#include "sorted.h"

int_sorted::int_sorted(const int *source, size_t size) {

}

int_sorted int_sorted::sort(const int *begin, const int *end) {
        if ( begin == end ) return int_sorted(nullptr , 0);
        if ( begin == end -1 ) return int_sorted(begin, 1);
        ptrdiff_t half = ( end-begin )/2; // pointer diff type
        const int* mid = begin + half;
        return sort( begin , mid ).merge( sort(mid, end ) );

}

size_t int_sorted::size() const {
    return buff.sz();
}

void int_sorted::insert(int value) {

}

const int *int_sorted::begin() const {
    return buff.begin();
}

const int* int_sorted::end() const{
    return buff.end();
}