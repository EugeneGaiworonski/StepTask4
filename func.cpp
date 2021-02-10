// Задание 1
// Написать функцию, которая принимает два параметра:
// основание степени и показатель степени, и вычисляет степень
// числа на основе полученных данных.
// ===========================================================================
// x - основание
// y - показатель степени
// ===========================================================================
float power(int x, int y)
{
   int done = 1;
   int result = x;
   do {
       if (y == 0) result = 1;
       else if (y != 1 && y > 0) result *= x;
       done++;
   } while(y > done);
    return  result;
}

// Задание 2:
// Написать функцию, которая получает в качестве параметров 2 целых числа
// и возвращает сумму чисел из диапазона между ними.
// ===========================================================================
// a,b - интервал
// rez - cумма диапазона
// ===========================================================================
int intervalSum(int a, int b)
{
    int rez = 0;
    for (int i = a; i <= b; i++) rez += i;
    return rez;
}

// Задание 3:
// Число называется совершенным, если сумма всех его делителей равна ему самому.
// Напишите функцию поиска таких чисел во введенном интервале.
void findPerfect(int a, int b) 
{

    for (int perfect = a; perfect <= b; perfect++)
    {
        int sum = 1;
        for (int i = 2; i < perfect; i++)
        {
            if ((perfect % i) == 0) sum += i;
        }
        if ((perfect == sum) && (perf != 1)) std::cout <<'\n'<<perfect;
    }
}

// Задание 5:
//Написать функцию, которая определяет, является ли «счастливым» шестизначное число.
bool isLuckyNumber(int number)
{
    int val = number, digQty = 0,left = 0, right = 0;
    
    while (val)
    {
        val = val / 10;
        digQty++;
    }
    if (digQty != 6) {cout<<"\nIllegal number"; return false;}
    
    for (int i = 1; i <=3; i++)
    {
        left += (number % 10);
        number /= 10;
    }
    
    for (int i = 1; i <=3; i++)
    {
        right += (number % 10);
        number /= 10;
    }
    
    return left==right ? true:false;	    
}

// Задание 6:
// Написать функцию, которая принимает две даты (т.е. функция принимает шесть параметров)
// и вычисляет разность в днях между этими датами. Для решения этой задачи необходимо также
// написать функцию, которая определяет, является ли год високосным.

bool isLeapYear(int year) {return year % 4 == 0 ? true:false;}// определяет високосный год

int daysQty(int year1, int month1, int day1, int year2, int month2, int day2)
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days1 = 0; int days2 = 0;
    int totalDays = 0;

    month1 -= 1;
    for(int i = month1; i <= 11; i++)
    {
        if (i == month1) days1 += month[i] - day1;
        else if (i == 1) days1 += isLeapYear(year1) ? 29 : 28; //февраль
        else days1 += month[i];
    }

    month2 -= 1;
    for(int i = month2; i <= 11; i++)
    {
        if (i == month2) days2 += month[i] - day2;
        else if (i == 1) days2 += isLeapYear(year2) ? 29 : 28; //февраль
        else days2 += month[i];
    }

    if (year1 == year2) totalDays = days1 - days2;
    else
    {
        for (int i = year1+1; i <= year2; i++)
            //year1+1 - т.к. year1 уже подсчитано в days1
            //year2 - корректируем после цикла отнимая days2
        {
            totalDays += isLeapYear(i) ? 366 : 365;
        }
        totalDays += (days1 - days2);
    }
    return totalDays;
}

// Задание 7:
// Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.
int arrayAverage(const int arr[], int length)
{
    //???int length = sizeof(arr)/sizeof(arr[0]);
    cout <<"lenght="<<length<<'\n';
    int avr = 0;
    for(int i = 0; i < length; i++) avr += arr[i];
    cout <<"avr="<<avr<<'\n';
    return avr/length;
}

// Задание 8:
// Написать функцию, определяющую количество положительных,
// отрицательных и нулевых элементов передаваемого ей массива.
void arrayExam(const int arr[], int length, int &zeroQty, int &positiveQty, int &negativeQty)
{
    zeroQty = positiveQty = negativeQty = 0;

    for(int i = 0; i < length; i++)
    {
        if (arr[i] < 0) negativeQty += 1;
        else if (arr[i] == 0) zeroQty += 1;
        else positiveQty += 1;
    }
}
