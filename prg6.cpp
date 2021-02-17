// Задание 6:
// Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5.
// Первый массив заполняется случайными числами, в диапазоне от 0 до 50. Второй массив
// заполняется по следующему принципу: первый элемент второго массива равен сумме первого
// и второго элемента первого массива, второй элемент второго массива равен сумму третьего
// и четвертого элемента первого массива.
//
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
        int iArr10[5][10] = {0};
        int iArr5[5][5] = {0};
        for (int i = 0; i < 5; i++) {
            for (int k = 0; k < 10; k++) {
                iArr10[i][k] = rand() % 5;
                cout <<"\t"<<iArr10[i][k];
            }
            cout <<"\n";
        }
        cout <<"\n";
        for (int i = 0; i < 5; i++){
            for (int k = 0, l = 0; k < 10, l < 5; k++, l++) {
                iArr5[i][l] += iArr10[i][k];
                k++;
                iArr5[i][l] += iArr10[i][k];
                cout <<"\t"<<iArr5[i][l];
            }
        cout <<"\n";
        }

        return 0;

}

