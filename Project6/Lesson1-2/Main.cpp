#include <iostream>
#include <cmath>
#include <windows.h>
#include "Cone.h"
using namespace std;

// Вывод данных усеченного конуса
ostream& operator<<(ostream& stream, TruncatedCone obj) {
    stream << "(" << obj.getX() << "; ";
    stream << obj.getY() << "; ";
    stream << obj.getZ() << ") ";
    stream << "Радиус вершины окружности - " << obj.getSmallRadius() << "\n";
    stream << "Радиус основания окружности -" << obj.getRadius() << "\n";
    stream << "h=" << obj.getHeight() << "\n";
    stream << "Площадь поверхности усеченного конуса" << obj.area() << "\n";
    stream << "обьем усеченного конуса" << obj.volume() << "\n";
    return stream;
}

ostream& operator<<(ostream& stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
    return stream;
}

// Ввод данных усеченного конуса
istream& operator>>(istream& stream, TruncatedCone& obj) {
    double a, b, c, r1, r2, h;
    cout << "Введите координаты центра усеченного конуса: ";
    stream >> a >> b >> c;
    obj.setCoordinate(a, b, c);
    cout << "Введите радиус вершины усеченного конуса: ";
    stream >> r1;
    obj.setSmallRadius(r1);
    cout << "Введите радиус основания усеченного конуса: ";
    stream >> r2;
    obj.setRadius(r2);
    cout << "Введите высоту усеченного конуса: ";
    stream >> h;
    obj.setHeight(h);

    return stream;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Cone c1(4, 8);
    Cone c2(1, 2, 3, 5, 10);
    TruncatedCone tc1(2, 4, 6);
    TruncatedCone tc2(1, 3, 5, 2, 4, 8);

    //cout << "Конус 1: " << c1;
    //cout << "Площадь поверхности: " << c1.area() << "\n";
    //cout << "Объем: " << c1.volume() << "\n";

    cout << "Конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";

    cout << "Усеченный конус\n";
    cout << "Конус 1: " << tc1;
    cout << "Конус 2: " << tc2;

    TruncatedCone cone;
    std::cin >> cone; // используем перегруженный оператор operator>> для ввода объекта TruncatedCone
    cout << "Конус 3: " << cone;
    if (cone == tc1) {
        std::cout << "Этот конус и конус 1 равны\n";
    }
    else {
        std::cout << "этот конус и конус 1 не равны\n";
    }
}