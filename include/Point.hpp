#pragma once
#include <iostream>

class Point {

private:
    double x;
    double y;

public: 
    Point(int x, int y);

    void move(int vectorA, int vectorB);

    void rotate(); //todo

};