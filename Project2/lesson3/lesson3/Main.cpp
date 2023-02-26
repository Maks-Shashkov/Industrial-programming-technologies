# include <iostream> 
#include <cmath> 
#include "Header.h";

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	figure A;
	figure B;
	figure C;

	float X1, X2, X3, X4, Y1, Y2, Y3, Y4;

	cout << "Введите координаты фигуры А ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	A.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Введите координаты фигуры B ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	B.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Введите координаты фигуры C ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	C.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "Параметры фигуры A: "; A.show();
	cout << "Параметры фигуры B: "; B.show();
	cout << "Параметры фигуры C: "; C.show();

	cout << "\n";

	if (A.is_prug()) cout << "Фигура A прямоугольник\n";
	if (B.is_prug()) cout << "Фигура B прямоугольник\n";
	if (C.is_prug()) cout << "Фигура C прямоугольник\n";

	cout << "\n";

	if (A.is_square()) cout << "Фигура A квадрат\n";
	if (B.is_square()) cout << "Фигура B квадрат\n";
	if (C.is_square()) cout << "Фигура C квадрат\n";

	cout << "\n";

	if (A.is_romb()) cout << "Фигура A ромб\n";
	if (B.is_romb()) cout << "Фигура B ромб\n";
	if (C.is_romb()) cout << "Фигура C ромб\n";

	cout << "\n";

	if (A.is_in_circle()) cout << "Вокруг фигуры A можно описать окружность\n";
	if (B.is_in_circle()) cout << "Вокруг фигуры B можно описать окружность\n";
	if (C.is_in_circle()) cout << "Вокруг фигуры C можно описать окружность\n";

	cout << "\n";

	if (A.is_out_circle()) cout << "В фигуру A можно вписать окружность\n";
	if (B.is_out_circle()) cout << "В фигуру B можно вписать окружность\n";
	if (C.is_out_circle()) cout << "В фигуру C можно вписать окружность\n";
}

