#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    eq2 exmpl(a1, b1, c1, a2, b2, c2);
    exmpl.find_X();
    cout << exmpl.find_Y(6) << "\n";
    exmpl.set(a1, b1, c1, a2, b2, c2);
    cout << "sum1 = " << a1 << "sum2 = " << b1 << "sum3 = " << c1 << endl;
    return 0;
}