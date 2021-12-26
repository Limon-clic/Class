# Класс Сумка для ноутбука

Автор Райков А.М. ИВТ-20

## Поля класса

* материал
* вес
* длина
* высота
* ширина
* колличество карманов

## Методы

* сеттеры, геттеры
* Вывод всей информации в виде строки
* Конструктор по умолчанию
* Конструкторы с параметрами

## Пример использования класса

``` c++
int main()
{
    system("chcp 1251");                                // русский язык в консоли
    system("cls");                                      // очистка консоли
 
    LaptopBag Bag;                                      // объект класса
    Bag.set_weight(111);                                // у Bag меняем поле weight с помощью метода set_weight()
    cout << "Bag" << endl << Bag.show();                // вывод объекта Bag
    cout << endl;

    LaptopBag *Bag1;                                    // указатель на объект класса
    Bag1= &Bag;                                         // Bag1 указывает на Bag
    Bag1->set_pocket(0);                                // с помощью указателя меняем значение в объекте
    cout << "Bag1" << endl << (*Bag1).show();           // вывод объекта Bag с помощью указателя
    cout << endl;

    LaptopBag* Bag2 = new LaptopBag;                    // указатель на объект класса с выделением памяти под объект
    Bag2->set_pocket(1);                                // с помощью указателя меняем значение в объекте
    cout << "Bag2" << endl << (*Bag2).show();           // вывод объекта с помощью указателя
    delete Bag2;                                        // после new надо очищать память
    cout << endl;
    
    LaptopBag Bag_arr[10];                              // массив из объектов класса
    Bag_arr[3].set_pocket(3);                           // меняем 4 эллемент массива (под индексом 3)
    cout << "Bag_arr" << endl << Bag_arr[3].show();     // вывод объекта Bag_arr[3]
    cout << endl;

    LaptopBag* Bag_arr2 = new LaptopBag[10];            // дин. массив из объектов класса
    Bag_arr2[3].set_pocket(4);                          // меняем 3 эллемент массива (под индексом 3)
    cout << "Bag_arr2" << endl << Bag_arr2[3].show();   // вывод объекта Bag_arr2[3]
    delete [] Bag_arr2;                                 // после new надо очищать память
    cout << endl;

    cout << "Массив указателей на объекты класса" << endl;
    LaptopBag* Bag_arr3[10];                            // массив указателей на объекты класса
    for (int i = 0; i < 10; i++)
    {
        Bag_arr3[i] = new LaptopBag;                    // выделяем память
        Bag_arr3[i]->set_pocket(i);                     // меняем кол-во карманов у каждого объекта (на порядковый номер с 0)
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Bag_arr3[" << i << "]" << endl << (*Bag_arr3[i]).show();	// вывод информации о всех объектах
        delete Bag_arr3[i];													// после new надо очищать память
        cout << endl;
    }
}
```

## Тесты:
``` c++
#include "pch.h"
#include "../Класс/LaptopBag.h"

TEST(LaptopBag, Height) {
	LaptopBag b;
	b.set_height(200);
	EXPECT_EQ(b.get_height(), 200);
}

TEST(LaptopBag, Material) {
	LaptopBag b;
	b.set_material("мифрил");
	EXPECT_EQ(b.get_material(), "мифрил");
}

TEST(LaptopBag, Length) {
	LaptopBag b;
	b.set_length(123);
	EXPECT_EQ(b.get_length(), 123);
}


TEST(LaptopBag, Pocket) {
	LaptopBag b;
	b.set_pocket(6);
	EXPECT_EQ(b.get_pocket(), 6);
}

TEST(LaptopBag, Weight) {
	LaptopBag b;
	b.set_weight(35);
	EXPECT_EQ(b.get_weight(), 35);
}

TEST(LaptopBag, Width) {
	LaptopBag b;
	b.set_width(40);
	EXPECT_EQ(b.get_width(), 40);
}
```

## UML Diagram
![Схема класса](Схемка.png)
