#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <numeric>
#include "myPrint.h"

struct comp{
    bool operator()(Car& car) const{
        double topSpeed = car.getSpeed();
        return topSpeed > 200;
    }
};

struct compName{
    bool operator()(Car& bil, Car& bill){
        return bil.getBrand() == bill.getBrand();
    }
};
struct equal{
    bool operator()(Car& car, Car& arr){
        return car.getBrand() == arr.getBrand() && car.getSpeed() == arr.getSpeed();
    }
};

struct MyBinOp{
    double operator()(double car, Car& bil){
        double sum = 0;
        sum += car + bil.getSpeed();
        return sum;
    }
};

struct MyUnOp{
    double operator()(Car& car){
        return car.getSpeed();
    }
};

struct MyFunc{
    double operator()(double car, double bil){
        return car - bil;
    }
};
int main() {

    std::array<Car,6>my_array;

    my_array[0] = {"BMW", 250};
    my_array[1] = {"Mercedes", 230};
    my_array[2] = {"Ford", 210};
    my_array[3] = {"Lambo", 320};
    my_array[4] = {"Lambo", 200};
    my_array[5] = {"Toyota", 202};

    std::vector<Car> cars(my_array.begin(), my_array.end());
    myPrint print;
//uppgift 1
    std::for_each(cars.begin(), cars.end(), print);

//uppgift 2
  auto it = std::find_if(cars.begin(), cars.end(), comp());
    if(it != cars.end())
        std::cout <<"car found: ";print(*it);
//uppgift 3
   it = std::adjacent_find(cars.begin(), cars.end(),compName());
    if(it != cars.end()){
        std::cout<<"Car found two times, "; print(*it);
    }
    else{
           std::cout<<"Can not find"<<std::endl;
    }
//uppgift 4
    std::equal(my_array.begin(), my_array.end(), cars.begin(), equal())
    ?std::cout << "The array and the vector are equal.\n"
    :std::cout << "The array and the vector are not equal.\n";

//uppgift 5
    auto subsequence = std::search(cars.begin(), cars.end(), std::begin(my_array),std::end(my_array), equal());

    if(subsequence != cars.end()){
        std::cout<<"Subsequence found at "<<(subsequence - cars.begin())<<'\n';
        while (subsequence != cars.end()){
            std::cout<<subsequence->getBrand()<<std::endl;
            subsequence++;
        }
    }

//uppgift 6
    double avg = 0;
    double sum = std::accumulate(cars.begin(), cars.end(), double(), MyBinOp());
    avg = sum/cars.size();
    std::cout<<"Sum: "<<sum<<" average is: "<<avg<<'\n';
    std::vector<double>avrage;
    for(int i=0;i<cars.size();i++){
        avrage.push_back(avg);
    }

//uppgit 7
    std::vector<double>v2;
    std::transform(cars.begin(), cars.end(), std::back_inserter(v2), MyUnOp());
    for (double & it : v2)
        std::cout << ' ' << it;
    std::cout << '\n';

//uppgift 8
    std::transform(v2.begin(), v2.end(),avrage.begin(), v2.begin(), MyFunc());
    for (double & it : v2)
        std::cout << ' ' << it;
    std::cout << '\n';

//uppgift 9
    std::sort(v2.begin(), v2.end());
    for(auto n : v2){
        std::cout << n << ' ';
    }

    std::cout << '\n';


    return 0;
}
