// Задание 1
// Напишите программу, которая создает двухмерный массив и заполняет его
// по следующему принципу: пользователь вводит число (например, 3)
// первый элемент массива принимает значение этого числа, последующий
// элемент массива принимает значение этого числа умноженного на 2
// (т.е. 6 для нашего примера), третий элемент массива предыдущий элемент,
// умноженный на 2 (т.е. 6*2=12 для нашего примера).
// Созданный массив вывести на экран.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int length = 0;
    int number = 0;
    cout << "\nArray length?= "; cin >> length;
    ;
    int **array = new int *[length];

    for (int i = 0; i < length; i++)
    {
        array[i] = new int[3];
        cout << "\nNumber?="; cin >> number;
        array[i][0] = number;
        array[i][1] = array[i][0] << 1;
        array[i][2] = array[i][1] << 1;
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << i << "][" << j << "]= " << array[i][j];
        }
        cout << '\n';
    }
    for (int i = 0; i < length; i++)
    {
        delete[] array[i];
        array[i] = 0;
    }
    delete[] array;
    array = 0;
    return 0;
}
