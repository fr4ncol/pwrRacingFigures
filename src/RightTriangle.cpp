#include <RightTriangle.hpp>

RightTriangle::RightTriangle(double x1, double y1,double x2,double y2, double x3, double y3) : a(x1,y1), b(x2,y2), c(x3,y3) {
    if (isTriangle()==false ) {
        throw exceptionThrower();
    }
}

void RightTriangle::move(double vecX, double vecY) {
    a.move(vecX, vecY);
    b.move(vecX, vecY);
    c.move(vecX, vecY);
}

void RightTriangle::rotate(float degrees, double xu, double yu) {
    a.rotate(degrees,xu,yu);
    b.rotate(degrees,xu,yu);
    c.rotate(degrees,xu,yu);
}

bool RightTriangle::isTriangle() {
    double abLenght = sqrt(pow(b.getX()-a.getX(), 2)+pow(b.getY()-a.getY(), 2));
    double acLenght = sqrt(pow(c.getX()-a.getX(), 2)+pow(c.getY()-a.getY(), 2));
    double bcLenght = sqrt(pow(c.getX()-b.getX(), 2)+pow(c.getY()-b.getY(), 2));

    if((abLenght+acLenght>bcLenght)&&(abLenght+bcLenght>acLenght)&&(acLenght+bcLenght>abLenght)) {
        return true;
    }
    else return false;
}

bool RightTriangle::exceptionThrower() {
    return 0;
}

double RightTriangle::perimeter() {
    double abLenght = sqrt(pow(b.getX()-a.getX(), 2)+pow(b.getY()-a.getY(), 2));
    double acLenght = sqrt(pow(c.getX()-a.getX(), 2)+pow(c.getY()-a.getY(), 2));
    double bcLenght = sqrt(pow(c.getX()-b.getX(), 2)+pow(c.getY()-b.getY(), 2));

    return abLenght+acLenght+bcLenght;
}

double RightTriangle::area() {
    double abLenght = sqrt(pow(b.getX()-a.getX(), 2)+pow(b.getY()-a.getY(), 2));
    double acLenght = sqrt(pow(c.getX()-a.getX(), 2)+pow(c.getY()-a.getY(), 2));
    double bcLenght = sqrt(pow(c.getX()-b.getX(), 2)+pow(c.getY()-b.getY(), 2));

    double halfPerimeter = perimeter()/2;
    double areaOfTriangle = sqrt(halfPerimeter*(halfPerimeter-abLenght)*(halfPerimeter-acLenght)*(halfPerimeter-bcLenght));
    return areaOfTriangle;
}

double RightTriangle::hypotenuse() {
    double abLenght = sqrt(pow(b.getX()-a.getX(), 2)+pow(b.getY()-a.getY(), 2));
    double acLenght = sqrt(pow(c.getX()-a.getX(), 2)+pow(c.getY()-a.getY(), 2));
    double bcLenght = sqrt(pow(c.getX()-b.getX(), 2)+pow(c.getY()-b.getY(), 2));

    double maxiumum = std::max({abLenght,acLenght, bcLenght});

    return maxiumum;
}

bool RightTriangle::isRightAngled() {
    double abLenght = sqrt(pow(b.getX()-a.getX(), 2)+pow(b.getY()-a.getY(), 2));
    double acLenght = sqrt(pow(c.getX()-a.getX(), 2)+pow(c.getY()-a.getY(), 2));
    double bcLenght = sqrt(pow(c.getX()-b.getX(), 2)+pow(c.getY()-b.getY(), 2));

    if (abLenght*abLenght + acLenght*acLenght == bcLenght || acLenght*acLenght + bcLenght*bcLenght == abLenght || bcLenght*bcLenght+abLenght*abLenght==acLenght) {
        return true;
    }
    else {
        return false;
    }


}