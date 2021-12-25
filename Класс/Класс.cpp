//Райков ИВТ-20
#include <iostream>
#include "LaptopBag.h"                                  // подключаем заголовочный ф. класса сумки для ноутбука

using namespace std;

int main()
{
    system("chcp 1251");                                // русский язык в консоли
    system("cls");                                      // очистка консоли

    LaptopBag Bag1;                                     // создаём объект класса, используя конструктор по умолч.
    LaptopBag Bag2(370, 230, 50, 310, 4);               // создаём объект класса, используя конструктор с параметрами
    LaptopBag Bag3(350, 210, 30, 290, 2, "эко-кожа");   // создаём объект класса, используя конструктор с параметрами

    Bag2.set_material("мифрил");                        // меняем материал

    cout << "Bag1" << endl << Bag1.show();              // вывод объекта Bag1
    cout << endl;
    cout << "Bag2" << endl << Bag2.show();              // вывод объекта Bag2
    cout << endl;
    cout << "Bag3" << endl << Bag3.show();              // вывод объекта Bag3
}
