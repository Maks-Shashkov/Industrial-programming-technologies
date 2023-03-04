#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class eq2 {
private:
    double a, b, c, A, B, C;
    double D;



public:
    eq2(double a1, double b1, double c1, double a2, double b2, double c2);

    void set(double a1, double b1, double c1);

    void set(double& a1, double& b1, double& c1, double& a2, double& b2, double& c2);

    double find_X();

    double find_Y(double x1);


};
