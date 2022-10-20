#include "Point.hpp"

Point::Point(double x, double y) {
    this -> x = x;
    this -> y = y;
}

void Point::move(double vecX, double vecY) {
    x = x + vecX;
    y = y + vecY;
}

void Point::rotate(float degrees, double xu, double yu) {

    float cosV = cos(degreesToRadians(degrees));
    float sinV = sin(degreesToRadians(degrees));
    
    x = x-xu;
    y = y-yu;

    double xNew = x *cosV - y*sinV;
    double yNew = x * sinV + y * cosV;

    x = xNew + xu;
    y = yNew + yu;
}

//getters, setter, etc.

float Point::degreesToRadians(float degrees) {
    return (degrees*M_PI/180); 
}
double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}