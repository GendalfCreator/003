#include <iostream>
#include <cmath>
#include "params.h"
using namespace std;

int main()
{
    //01. Вычисление выражения и вывод на экран
    const int a = 2, b =3, c = 7, d = 11;
    float result;

    result = a * (b + ((float)c / d));

    cout << result << endl;

    //02. Использование тернарного оператора
    int dano = 127;
    int difference;

    difference = (dano > 21) ? 2 * (21 - dano) : 21 - dano;

    cout << abs(difference) << endl;

    //03. Инициализация переменных в стороннем файле (params.h)
    const extern int x, y, z, q;
    float result00;

    result00 = x * (y + ((float)z / q));

    cout << result00 << endl;

    //04. Вывод значения ячейки куба по указателю
    int cube[3][3][3] = {};
    cube[1][1][1] = 143; //Для отладки
    int* cube_element;
    cube_element = &cube[1][1][1];

    cout << *cube_element << endl;
    return 0;
}
