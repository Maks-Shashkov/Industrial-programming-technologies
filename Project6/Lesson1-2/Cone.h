#pragma once

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

// Класс конуса.
class Cone {
    double x, y, z;        // трехмерные координаты
    double radius;         // радиус
    double height;         // высота
public:
    Cone() { x = y = z = radius = height = 0; }
    // Конструктор с центром в начале координат
    Cone(double r, double h) {
    x = y = z = 0.0;
    radius = r;
    height = h;
}
    // Конструктор для Cone
    Cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
}
    // Функции доступа
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    double getX();

    double getY();

    double getZ();

    // Площадь полной поверхности
    double area();
    // Объем
    double volume();

    friend ostream& operator<<(ostream& stream, Cone obj);

};

class TruncatedCone : public Cone {
    double smallRadius; // радиус вершины
public:
    // Конструктор по умолчанию
    TruncatedCone() { smallRadius = 0; }
    // Конструктор с центром в начале координат
    TruncatedCone(double r1, double r2, double h) : Cone(r2, h) { smallRadius = r1; }
    // Конструктор для TruncatedCone
    TruncatedCone(double a, double b, double c, double r1, double r2, double h) : Cone(a, b, c, r2, h) {
        smallRadius = r1;
    }

    // Функция доступа
    void setSmallRadius(double r);
    double getSmallRadius();

    // Площадь полной поверхности
    double area();
    // Объем
    double volume();

    // Перегрузка оператора вывода
    friend ostream& operator<<(ostream& stream, TruncatedCone obj);
    // Перегрузка оператора ввода
    friend istream& operator>>(istream& stream, TruncatedCone& obj);
    // Метод сравнения конусов
    bool operator==(TruncatedCone obj);




};
