//
// Created by Bashar Levin on 2022-12-08.
//

#ifndef LAB3_P_QUEUE_H
#define LAB3_P_QUEUE_H
#include <iostream>
#include <algorithm>

template<typename T, typename Comp = std::less<>>
class p_queue {
public:

    T pop(){
        T value = elem.front();
        elem.erase(elem.begin());
        return value;
    }

    void push(const T value, Comp comp = Comp()){
        elem.push_back(value);
        std::sort(elem.begin(),elem.end(),comp);
    }

    size_t size() const{
        return elem.size();
    }

    bool empty() const{
        return elem.empty();
    }

private:
    std::vector<T> elem;

};

#endif //LAB3_P_QUEUE_H
