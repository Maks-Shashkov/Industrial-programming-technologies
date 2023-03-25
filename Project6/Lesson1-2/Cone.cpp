#include <iostream>
#include <cmath>
#include <windows.h>
#include "Cone.h"

using namespace std;

const double pi = 3.14159265;

// Функции доступа
void Cone::setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
void Cone::setRadius(double r) { radius = r; }
void Cone::setHeight(double h) { height = h; }
double Cone::getRadius() { return radius; }
double Cone::getHeight() { return height; }
double Cone::getX() { return x; }
double Cone::getY() { return y; }
double Cone::getZ() { return z; }


// Площадь полной поверхности
double Cone::area() {
	double l = sqrt(height * height + radius * radius);
	return pi * radius * (radius + l);
}
// Объем
double Cone::volume() {
	return pi * radius * radius * height / 3;
}

// Функция доступа
void TruncatedCone::setSmallRadius(double r) { smallRadius = r; }
double TruncatedCone::getSmallRadius() { return smallRadius; }

// Площадь полной поверхности
double TruncatedCone::area() {
    double differ = getRadius() - getSmallRadius();
    double Hup = sqrt(pow(getHeight(), 2) + pow(differ, 2));
    double result = pi * (pow(getRadius(), 2) + (Hup * (getRadius() + getSmallRadius())) + pow(getSmallRadius(), 2));
    return result;
}
// Объем
double TruncatedCone::volume() {
    double h = getHeight();
    double r1 = getSmallRadius();
    double r2 = getRadius();
    return pi * h * (r1 * r1 + r2 * r2 + r1 * r2) / 3;
}

bool TruncatedCone::operator==(TruncatedCone obj) {
    return (getRadius() == obj.getRadius() && getHeight() == obj.getHeight() && smallRadius == obj.smallRadius);
}

