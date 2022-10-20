#pragma once
#include <iostream>
#include <algorithm>
#include <Point.hpp>

class Segment {

private:
    Point a;
    Point b; 
public: 
    Segment(double x1, double y1,double x2,double y2); 

    void move(double vectorA, double vectorB);

    void rotate(float degrees, double x, double y);

    double segmentLenght();

    bool isPointLyingOnSegment(double x, double y);
    
    void printCoordinates();

    //bool areParallel(Segment& seg);
};