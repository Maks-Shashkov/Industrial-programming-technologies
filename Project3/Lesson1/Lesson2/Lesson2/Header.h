#pragma once
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
class rational {
private:
    int a, b, c;
    float d;
    bool flag, flag1;
public:
    rational();
    rational(int a1, int b1);
    void set(int a1, int b1);
    void show();
};

