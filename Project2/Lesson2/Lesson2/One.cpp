#include "Circle.h";

#include <cmath> 

using namespace std;

    
void Circle::set_circle(float rad, float x, float y) {
    radius = rad;
    x_center = x;
    y_center = y;
}
float Circle::square() {
    float result = 3.14 * pow(radius, 2);
    return result;
}
float Circle::square_circle(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float square = sqrt(p * (p - a) * (p - b) * (p - c));
    return square;
}

bool Circle::triangle_around(float a, float b, float c) {
    float per = a + b + c;

    if (square_circle(a, b, c) == (per * radius) / 2) {
        return true;
    }
    else {
        return false;
    }
}

bool Circle::triangle_in(float a, float b, float c) {
    if (square_circle(a, b, c) == ((a * b * c) / (4 * radius))) {
        return true;
    }
    else
    {
        return false;
    }
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr)
{
    if ((r == radius && x_cntr == x_center && y_cntr == y_center) || (r + radius) > (sqrt(pow(x_cntr - x_center, 2) + pow(y_cntr - y_center, 2))))
    {
        return true;
    }
    else
    {
        return false;
    }
}

