#include "Segment.hpp"
#include <algorithm>

Segment::Segment(double x1, double y1,double x2,double y2) : a(x1,y1), b(x2,y2) {
    //initalizing objects of segment
}

void Segment::move(double vecX, double vecY) {
    a.move(vecX, vecY);
    b.move(vecX, vecY);
}

void Segment::rotate(float degrees, double xu, double yu) {
    a.rotate(degrees,xu,yu);
    b.rotate(degrees,xu,yu);
}

void Segment::printCoordinates() {
    std::cout << a.getX() << "," << a.getY() << std::endl;
    std::cout << b.getX() << "," << b.getY() << std::endl;
}

double Segment::segmentLenght() {
    double lenght = sqrt(pow(b.getX()-a.getX(), 2)+pow(b.getY()-a.getY(), 2));
    return lenght;
}

bool Segment::isPointLyingOnSegment(double xVal, double yVal) {
    double x1 = a.getX();
    double y1 = a.getY();
    double x2 = b.getX();
    double y2 = b.getY();

    if (x2*yVal+x1*y2+xVal*y1-x1*yVal-x2*y1-xVal*y2==0 && xVal>=std::min(x1, x2)&& xVal<=std::max(x1, x2) && yVal>=std::min(y1, y2) && yVal<=std::max(y1, y2)) {
        return true;
    }
    else return false;
}

bool Segment::areSegmentsParallel(double a1,double b1, double a2, double b2) {
    double xvecXY = b.getX()-a.getX();
    double yvecXY = b.getY()-a.getY();
    double xvecAB = a2-a1;
    double yvecAB = b2-b1;



    if((xvecXY*yvecAB)-(yvecXY*xvecAB)==0) {
        return true;
    }
    else {
        return false;
    }
}


bool Segment::areSegmentsPerpendicular (double a1,double b1, double a2, double b2) {
    double xvecXY = b.getX()-a.getX();
    double yvecXY = b.getY()-a.getY();
    double xvecAB = a2-a1;
    double yvecAB = b2-b1;



    if((xvecXY*xvecAB)+(yvecXY*yvecAB)==0) {
        return true;
    }
    else {
        return false;
    }
}