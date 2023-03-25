#pragma once

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

// ����� ������.
class Cone {
    double x, y, z;        // ���������� ����������
    double radius;         // ������
    double height;         // ������
public:
    Cone() { x = y = z = radius = height = 0; }
    // ����������� � ������� � ������ ���������
    Cone(double r, double h) {
    x = y = z = 0.0;
    radius = r;
    height = h;
}
    // ����������� ��� Cone
    Cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
}
    // ������� �������
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    double getX();

    double getY();

    double getZ();

    // ������� ������ �����������
    double area();
    // �����
    double volume();

    friend ostream& operator<<(ostream& stream, Cone obj);

};

class TruncatedCone : public Cone {
    double smallRadius; // ������ �������
public:
    // ����������� �� ���������
    TruncatedCone() { smallRadius = 0; }
    // ����������� � ������� � ������ ���������
    TruncatedCone(double r1, double r2, double h) : Cone(r2, h) { smallRadius = r1; }
    // ����������� ��� TruncatedCone
    TruncatedCone(double a, double b, double c, double r1, double r2, double h) : Cone(a, b, c, r2, h) {
        smallRadius = r1;
    }

    // ������� �������
    void setSmallRadius(double r);
    double getSmallRadius();

    // ������� ������ �����������
    double area();
    // �����
    double volume();

    // ���������� ��������� ������
    friend ostream& operator<<(ostream& stream, TruncatedCone obj);
    // ���������� ��������� �����
    friend istream& operator>>(istream& stream, TruncatedCone& obj);
    // ����� ��������� �������
    bool operator==(TruncatedCone obj);




};
