#pragma once
#include <cmath> 

using namespace std;
class Circle
{
private: float radius, x_center, y_center;

public:
    Circle() {
        radius = 0;
        x_center = 0;
        y_center = 0;
    }
    Circle(float r, float x, float y) {
        radius = r;
        x_center = x;
        y_center = y;
    }

    void set_circle(float rad, float x, float y);

    float square();

    float square_circle(float a, float b, float c);

    bool triangle_around(float a, float b, float c);

    bool triangle_in(float a, float b, float c);

    bool check_circle(float r, float x_cntr, float y_cntr);

};
