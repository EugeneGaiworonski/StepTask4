// Задание 4:
// В двумерном массиве целых числе посчитать:
// Сумму всех элементов массива
// Среднее арифметическое всех элементов массива
// Минимальный элемент
// Максимальный элемент
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
#define __utf8__
#ifdef __utf8__
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#else
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#endif
    int iSum = 0;
    int iAvg = 0;
    int iMin = INT_MAX;
    int iMax = INT_MIN;
    int iArray[8][8] = {0};

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
                iArray[i][j] =  i + j;
    }
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++) {
            cout << "\t"<< iArray[i][j];
        }
    cout << "\n";
    }

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++) {
            iSum += iArray[i][j];
            iMin = ( iArray[i][j] < iMin) ? iArray[i][j] : iMin;
            iMax = ( iArray[i][j] > iMax) ? iArray[i][j] : iMin;
        }
    }
    cout<< "\nСумма = "<< iSum;
    cout<< "\nСреднее арифметическое ("<< (sizeof(iArray)/sizeof(iArray[0][0])) <<")= "<< iSum / (sizeof(iArray)/sizeof(iArray[0][0]));
    cout<< "\nМинимум = "<< iMin;
    cout<< "\nМаксимум= "<< iMax;
    return 0;
}

