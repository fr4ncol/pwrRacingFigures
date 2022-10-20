#pragma once
#include <Point.hpp>
#include <math.h>
#include <algorithm>
#include <initializer_list>

class RightTriangle {

private:
    bool isPossible;
    Point a;
    Point b;
    Point c; 
public: 
    RightTriangle(double x1, double y1,double x2,double y2, double x3, double y3);
    
    void move(double vectorA, double vectorB);

    void rotate(float degrees, double x, double y);
    
    bool isTriangle();

    bool exceptionThrower();

    double perimeter();

    double area();

    double hypotenuse();

    bool isRightAngled();
};