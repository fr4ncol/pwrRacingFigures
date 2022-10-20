#include <iostream>
#include <Point.hpp>
#include <Segment.hpp>

int main() {
    Segment odcinek(1,1,2,2);
    odcinek.printCoordinates();
    std::cout<<odcinek.isPointLyingOnSegment(1.83,1.83);
    return 0;
}