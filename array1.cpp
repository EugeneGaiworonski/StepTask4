// Задание 1
// В одномерном массиве, заполненном случайными числами,
// определить минимальный и максимальный элементы.

#include <windows.h>
#include <iostream>

int main()
{
    SetConsoleCP(65001);//UTF-8
    SetConsoleOutputCP(65001);
    int length = 0, min = INT_MAX, max = INT_MIN;
    do {
        std::cout <<"Размер массива: "; std::cin>>length;std::cout << '\n';
    } while ( (length <= 0) && (length > 500));
    int *array = new int[length];

    for (int i = 0; i < length; i++) array[i] = rand();
    for (int i = 0; i < length; i++) std::cout<<'\n'<<array[i];

    for (int i = 0; i < length; i++) if (array[i] > max) max = array[i];
    for (int i = 0; i < length; i++) if (array[i] < min) min = array[i];
    std::cout << "\n\nMax= "<<max;
    std::cout << "\nMin= "<<min;

    delete[] array;
    array = 0;
    return 0;
}
