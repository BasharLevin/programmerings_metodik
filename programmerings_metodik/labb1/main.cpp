#include <iostream>
#include "buffer.h"
int main() {
    int_buffer buff(10);
    std::cout<<buff.end()<<std::endl;
    std::cout<<buff.end() - buff.begin()<<std::endl;
    std::cout<<buff.begin()<<std::endl;

    return 0;
}
