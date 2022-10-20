#include <iostream>
#include <Point.hpp>
#include <Segment.hpp>
#include <Triangle.hpp>

int main() {
    Triangle trojkat(0,0,2,3,3,1);
    std::cout<<trojkat.perimeter()<<std::endl;
    std::cout<<trojkat.area() << std::endl;
    return 0;
}