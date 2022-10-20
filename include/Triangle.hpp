#pragma once
#include <Point.hpp>
#include <math.h>

class Triangle {

private:
    Point a;
    Point b;
    Point c; 
public: 
    Triangle(double x1, double y1,double x2,double y2, double x3, double y3);
    
    void move(double vectorA, double vectorB);

    void rotate(float degrees, double x, double y);
    
    bool isTriangle();

    bool exceptionThrower();

    double perimeter();

    double area();
};