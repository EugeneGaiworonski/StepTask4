// Задание 3
// Создайте двухмерный массив. Заполните его случайными числами и покажите на экран.
// Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз).
// Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический.
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int table[5][5] = {0};
    int buffer[5] = {0};
    int select = 0;
    int step = 0;

//#define ASCII
#ifdef ASCII
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#else
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif
    int debug = 0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++) {
            table[i][j] = rand() % 10;
            //table[i][j] = debug++;
        }

    do {
        //вывод
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                cout << "\t" <<table [i][j];
            }
            cout << "\n";
        }
        cout << "\nСместить 1-вверх, 2-вниз, 3-влево, 4-вправо: "; cin >> select;
        if (select == 0) return 0;
        cout << "\nНа: ";cin >> step;
        //сдвиг
        switch (select) {
            case 1:
                for (int r = 0; r < step; r++){
                    for (int i = 0; i < 5; i++) buffer[i] = table[0][i];

                        for(int i = 0; i < 4; i++) {
                            for(int j = 0; j < 5; j++) {
                                table[i][j]=table[i+1][j];
                            }
                        }

                     for (int i = 0; i < 5; i++) table[4][i] = buffer[i];
                }
                break;
            case 2:
                for (int r = 0; r < step; r++){
                    for (int i = 0; i < 5; i++) buffer[i] = table[4][i];
                        for(int i = 4; i > 0; i--) {
                            for(int j = 0; j < 5; j++) {
                                table[i][j]=table[i-1][j];
                            }
                        }
                    for (int i = 0; i < 5; i++) table[0][i] = buffer[i];
                }
                break;
            case 3:
                for (int r = 0; r < step; r++){
                    for (int i = 0; i < 5; i++) buffer[i] = table[i][0];
                        for (int i = 0; i < 5; i++) {
                            for (int j = 0; j < 4; j++) {
                                table[i][j]=table[i][j+1];
                            }
                        }
                    for (int i = 0; i < 5; i++) table[i][4] = buffer[i];
                }
                break;
            case 4:
                for (int r = 0; r < step; r++){
                    for (int i = 0; i < 5; i++) buffer[i] = table[i][4];
                        for (int i = 0; i < 5; i++) {
                            for (int j = 4; j > 0; j--) {
                                table[i][j]=table[i][j-1];
                            }
                        }
                    for (int i = 0; i < 5; i++) table[i][0] = buffer[i];
                }
                break;
            case 0:
                return 0;
            default:
                break;
        }
    } while(true);

    return 0;
}
