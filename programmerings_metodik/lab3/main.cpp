#include <iostream>
#include "p_queue.h"
#include <string>
#include <random>
#include <cstddef>
int gen();
struct Broker{
    std::string name;
    int price = 0;
};
int gen(){
    int range = 30 - 15 + 1;
    int num = rand() % range + 15;


    return num;
}

int main(){

    struct CompareBroker{
        bool operator()(const Broker & lhs, const Broker & rhs) const{
            return lhs.price < rhs.price;
        }
    };

    p_queue<Broker, CompareBroker> buyers, sellers;

    int n = 7;
    Broker values;
    for(int i = 0; i < n; i++){
        values.name = "Erik Pendel";
        values.price = gen();
        buyers.push(values);
        values.name = "Jarl Wallenburg";
        values.price = gen();
        buyers.push(values);
        values.name = "Joakim von Anka";
        values.price = gen();
        values.name = "Erik Pendel";
        values.price = gen();
        sellers.push(values);
        values.name = "Jarl Wallenburg";
        values.price = gen();
        sellers.push(values);
        values.name = "Joakin von Anka";
        values.price = gen();
        sellers.push(values);
    }

    while(!buyers.empty() && !sellers.empty()){
        auto buyer = buyers.pop();
        auto seller = sellers.pop();

        if(buyer.price >= seller.price){
            std::cout << buyer.name << " bought shares worth " << seller.price << "kr for "
                      << buyer.price << "kr from " << seller.name << '\n';
        }
        else(buyers.push(buyer));{
            std::cout<<buyer.name<<"is offering  "<<seller.price<<"kr which is less than the shop order \n";
        }

    }

    return 0;
}
