# include <iostream> 
#include <cmath> 
#include "Circle.h";


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Circle circle;
    float rad, x, y;
    float rad2, x2, y2;
    float a, b, c;
    cout << "Введите радиус окружности, а так же его координаты через пробел: " << endl;
    cin >> rad >> x >> y;
    circle.set_circle(rad, x, y);
    cout << "Площадь окружности" << circle.square() << endl;
    cout << "Введите стороны треугольника" << endl;
    cin >> a >> b >> c;

    if (circle.triangle_around(a, b, c) == true) {
        cout << "Вокруг треугольника можно описать окружность" << endl;
    }
    else
    {
        cout << "Вокруг треугольника нельзя описать окружность" << endl;
    }

    if (circle.triangle_in(a, b, c) == true) {
        cout << "В треугольник можно вписать окружность" << endl;
    }
    else
    {
        cout << "В треугольник нельзя вписать окружность" << endl;
    }

    cout << "Введите радиус второй окружности, а так же его координаты через пробел: " << endl;
    cin >> rad2 >> x2 >> y2;
    if (circle.check_circle(rad2, x2, y2) == true) {
        cout << "окружность радиуса r с координатами центра x и y пересекается с данной окружностью" << endl;
    }
    else
    {
        cout << "окружность радиуса r с координатами центра x и y не пересекается с данной окружностью" << endl;
    }


    return 0;
}
