#include <iostream>
#include <Point.hpp>
#include <Segment.hpp>
#include <Triangle.hpp>
#include <RightTriangle.hpp>

int main() {
    Segment dupa(0,0,2,0);
    std::cout << dupa.areSegmentsPerpendicular(1,1,1,-1);
    return 0;
}