#include <iostream>
#include <cmath>
#include <windows.h>
#include "Cone.h"
using namespace std;

// ����� ������ ���������� ������
ostream& operator<<(ostream& stream, TruncatedCone obj) {
    stream << "(" << obj.getX() << "; ";
    stream << obj.getY() << "; ";
    stream << obj.getZ() << ") ";
    stream << "������ ������� ���������� - " << obj.getSmallRadius() << "\n";
    stream << "������ ��������� ���������� -" << obj.getRadius() << "\n";
    stream << "h=" << obj.getHeight() << "\n";
    stream << "������� ����������� ���������� ������" << obj.area() << "\n";
    stream << "����� ���������� ������" << obj.volume() << "\n";
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

// ���� ������ ���������� ������
istream& operator>>(istream& stream, TruncatedCone& obj) {
    double a, b, c, r1, r2, h;
    cout << "������� ���������� ������ ���������� ������: ";
    stream >> a >> b >> c;
    obj.setCoordinate(a, b, c);
    cout << "������� ������ ������� ���������� ������: ";
    stream >> r1;
    obj.setSmallRadius(r1);
    cout << "������� ������ ��������� ���������� ������: ";
    stream >> r2;
    obj.setRadius(r2);
    cout << "������� ������ ���������� ������: ";
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

    //cout << "����� 1: " << c1;
    //cout << "������� �����������: " << c1.area() << "\n";
    //cout << "�����: " << c1.volume() << "\n";

    cout << "����� 2: " << c2;
    cout << "������� �����������: " << c2.area() << "\n";
    cout << "�����: " << c2.volume() << "\n";

    cout << "��������� �����\n";
    cout << "����� 1: " << tc1;
    cout << "����� 2: " << tc2;

    TruncatedCone cone;
    std::cin >> cone; // ���������� ������������� �������� operator>> ��� ����� ������� TruncatedCone
    cout << "����� 3: " << cone;
    if (cone == tc1) {
        std::cout << "���� ����� � ����� 1 �����\n";
    }
    else {
        std::cout << "���� ����� � ����� 1 �� �����\n";
    }
}