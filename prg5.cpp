// Задание 5:
// В двумерном массиве целых чисел посчитать сумму элементов: в каждой строке; в каждом столбце;
// одновременно по всем строкам и всем столбцам. Оформить следующим образом:
// 3 5 6 7 | 21
// 12 1 1 1 | 15
// 0 7 12 1 | 20
// ---------------------
//15 3 19 9 | 56
//
// Лирическое отступление: над этой программой я просидел 3 дня.
// Все компилируется, запускается - но суммы неверные!
// На 4 день - дзен - iHorzSum и iVertSum не обнуляются.
// Конструкция int* iVertSum  = new int[iSize] {0}; прекрасно компилится, НО НЕ РАБОТАЕТ!
// Только по-взрослому, только циклом.
// Коварство имя тебе - С++...
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
        int iSize = 0;
        cout << "Размер массива: "; cin >> iSize;

        int** iArray = new int *[iSize];
        for(int i = 0; i < iSize; i++) { iArray[i] = new int[i];}
        int* iHorzSum  = new int[iSize] {0};
        int* iVertSum  = new int[iSize] {0};
        for (int i = 0; i < iSize; i++) {
            iHorzSum[i] = 0; iVertSum[i] = 0;
        }

        int  iTotalSum = 0;

        for (int i = 0; i < iSize; i++)
            for (int j = 0; j < iSize; j++) {
                    iArray[i][j] =  rand() % 9;
        }

        for (int i = 0; i < iSize; i++){
            for (int j = 0; j < iSize; j++) {
                iHorzSum[i] += iArray[i][j];
            }
        }

        for (int j = 0; j < iSize; j++){
            for (int i = 0; i < iSize; i++) {
                iVertSum[j] += iArray[i][j];
            }
        }

        for (int i = 0; i < iSize;i++) {iTotalSum += (iVertSum[i] + iHorzSum[i]);}

        for (int i = 0; i < iSize; i++) {
            cout << "\n";
            for (int j = 0; j < iSize; j++) {
                cout << "\t"<< iArray[i][j];
            }
            cout << "\t|\t"<< iHorzSum[i];
        }
        for (int i = 0; i < iSize; i++) {}
        cout << "\n\t";
        for (int i = 0; i <= iSize; i++) {cout<<"---------";}
        cout << "\n";
        for (int i = 0; i < iSize; i++)	{
                cout << "\t"<< iVertSum[i];
        }
        cout << "\t|\t"<< iTotalSum;
        for (int i = 0; i < iSize; i++) {delete iArray[i];}
	delete[] iArray; 
	delete[] iHorzSum;
	delete[] iVertSum;
	return 0;

}

