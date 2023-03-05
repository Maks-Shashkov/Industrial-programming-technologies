#include <iostream>
#include <cmath>
#include "Header.h"



eq2::eq2(double a1, double b1, double c1, double a2, double b2, double c2) {
    a = a1; b = b1; c = c1;
    A = a2; B = b2; C = c2;
    D = b * b - 4 * a * c;
    
}

void eq2::set(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}
double eq2::find_X() {
    if (D < 0) {
        cout << "Корней нет" << endl;
        return 0;
    }
    else {
        if (D == 0) {
            cout << "Корень один: " << endl;
            double x = (-b - sqrt(D)) / (2 * a);
            cout << x << endl;
            return x;
        }
        else {
            cout << "Корней,два наибольший: " << endl;
            double x1 = (-b - sqrt(D)) / (2 * a);
            double x2 = (-b + sqrt(D)) / (2 * a);
            if (x1 > x2) {
                cout << x1 << endl;
                return x1;
            }
            else {
                cout << x2 << endl;
                return x2;
            }
        }
    }
}
double eq2::find_Y(double x1) {
    return a * x1 * x1 + b * x1 + c;
}

void eq2::set(double& a1, double& b1, double& c1, double& a2, double& b2, double& c2) {
    a1 = a1 + a2;
    b1 = b1 + b2;
    c1 = c1 + c2;
}
