#include "Header.h"
int main()
{
    setlocale(0, "");
    int n, num, dem;
    while (true)
    {
        system("cls");
        cout << "Введите количество дробей:: ";
        cin >> n;
        if (n == 0)
        {
            return false;
        }
        rational* mas = new rational[n];
        system("cls");
        for (int i = 0; i < n; i++)
        {
            cout << "Числитель: ";
            cin >> num;
            cout << "Знаменатель: ";
            cin >> dem;
            mas[i].set(num, dem);
            mas[i] = rational(num, dem);
            system("cls");
        }
        for (int i = 0; i < n; i++)
        {
            mas[i].show();
        }
        delete[]mas;
        system("pause");
    }
    return 0;
}
