#pragma once
#include <iostream>
#include <math.h>
#include <cmath>
//#define PI 3.14159265

class Point {

private:
    double x;
    double y;

public: 
    Point(double x, double y);

    void move(double vectorA, double vectorB);

    void rotate(float degrees, double x, double y); //in degrees not radians

    //getters, setters, etc.

    float degreesToRadians(float degrees);

    double getX();

    double getY();

};