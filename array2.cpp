/ Задание 2
// Пользователь вводит прибыль фирмы за год (12 месяцев).
// Затем пользователь вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем).
// Необходимо определить месяц, в котором прибыль была максимальна и месяц,
// в котором прибыль была минимальна с учетом выбранного диапазона.
using namespace std;
#include <windows.h>
#include <conio.h>
#include <iostream>

void getData();
void putData();
void setPeriod();
int getMax(int,int);
int getMin(int,int);

int profit[12] = {0};
int first = 0, last = 0;

int main()
{   
    SetConsoleCP(65001);//UTF-8
    SetConsoleOutputCP(65001);
    //getData
    for (int i = 0; i < 12; i++) {
        cout << 1 + i << ": ";
        cin >> profit[i];
        };
    //putData
    for (int i = 0; i < 12; i++) cout <<'\n'<<  i + 1 << " " << profit[i];
    //setPeriod
    cout << "\n\nНачало периода: ";
    cin >> first;
    cout << "Конец периода: ";
    cin >> last;
    //
    cout << "\nMAX " << first  << "-" << last << " " << getMax(first,last);
    cout << "\nMIN " << first  << "-" << last << " " << getMin(first,last);
    _getch();
    return 0;
}

int getMax(int a, int b)
{
    int max = INT_MIN;
    for (int i = --a; i <= --b; i++) if (profit[i] > max) max = profit[i];
    return max;
}

int getMin(int a, int b)
{
    int min = INT_MAX;
    for (int i = --a; i <= --b; i++) if (profit[i] < min) min = profit[i];
    return min;
}
