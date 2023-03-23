#include <iostream>
#include "parallelepiped.h"
#include "cylinder.h"
#include "RoundedRectangle.h"
#include <vector>
#include <memory>

using ShapeVector = std::vector<std::shared_ptr<shape> >;

double getData(const ShapeVector & shapes)
{
    double sum = 0.0;
    for (int i = 0; i < shapes.size(); ++i) {
        sum+=shapes.at(i)->getArea();
        std::cout<< typeid(*shapes.at(i)).name()<<" Has color: "<<shapes.at(i)->getColor()<<" and has area: "<<shapes.at(i)->getArea()<<std::endl;

    }
    std::cout<<"sum is: "<<sum<<std::endl;
    return sum;

}
int main(){
    ShapeVector shapes;
    circle c1(1.0, "yellow");
    Rectangle r1(4.0, 4.0, "red");
    parallelepiped p1(4.0, 4.0, 4.0, "blue");
    cylinder cy1(4.0,4.0,"Green");
    RoundedRectangle rr1(4.0,4.0,1.0,"black");
    shapes.push_back(std::make_shared<circle>(c1));
    shapes.push_back(std::make_shared<cylinder>(cy1));
    shapes.push_back(std::make_shared<parallelepiped>(p1));
    shapes.push_back(std::make_shared<Rectangle>(r1));
    shapes.push_back(std::make_shared<RoundedRectangle>(rr1));
    getData(shapes);

    return 0;
}
