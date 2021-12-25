#include "LaptopBag.h"

    LaptopBag::LaptopBag()                                  // конструктор класса (по умолчанию)
    {
        set_material("эко-кожа");
        set_weight(300);
        set_length(360);
        set_height(260);
        set_width(40);
        set_pocket(3);
    }

    LaptopBag::LaptopBag(float length1, float height1, float width1, float weight1, int pocket1)
        // второй конструктор класса (с параметрам)
        // длинна, высота, ширина, вес, кол-во карманов
    {
        set_material("солома");
        set_weight(weight1);
        set_length(length1);
        set_height(height1);
        set_width(width1);
        set_pocket(pocket1);
    }

    LaptopBag::LaptopBag(float length1, float height1, float width1, float weight1, int pocket1, const string &material1)
        // второй конструктор класса (с параметрами)
        // длинна, высота, ширина, вес, кол-во карманов, материал, наличие ноута в сумке
    {
        LaptopBag::set_values(length1, height1, width1, weight1, pocket1, material1);
    }

    void LaptopBag::set_values(float length1, float height1, float width1, float weight1, int pocket1, const string& material1)
        //задаём все значения
    {
        LaptopBag::set_weight(weight1);
        LaptopBag::set_length(length1);
        LaptopBag::set_height(height1);
        LaptopBag::set_width(width1);
        LaptopBag::set_pocket(pocket1);
        LaptopBag::set_material(material1);
    }

    LaptopBag::~LaptopBag() { }                             // деструктор класса{ }

    string LaptopBag::show() const                          // вывод информации в виде строки
    {
        string str;
        str = "материал: " + material + "\n" +
        "вес: " + to_string(weight) + "\n" +
        "длина: " + to_string(length) + "\n" +
        "высота: " + to_string(height) + "\n" +
        "ширина: " + to_string(width) + "\n" +
        "колличество карманов: " + to_string(pocket) + "\n";
        return str;
    }

    string LaptopBag::get_material() const                  // получаем материал
    {
        return material;
    }

    void LaptopBag::set_material(const string& material1)  // устанавливаем материал
    {
        if ((material1 == "солома") || (material1 == "мифрил") || (material1 == "пластик") || (material1 == "эко-кожа") || (material1 == "стекло"))
            material = material1;
        else
        {
            cout << "ошибка в указании материала" << endl << endl;
            material = "---";
        }
    }

    float LaptopBag::get_weight()                   // получаем вес
    {
        return weight;
    }

    void LaptopBag::set_weight(float weight1)       // устанавливаем вес
    {
        if (weight1 > 0)
            weight = weight1;
        else
            cout << "ошибка";
        //throw - 1;  // todo
    }

    float LaptopBag::get_length()                   // получаем длину
    {
        return length;
    }

    void LaptopBag::set_length(float length1)       // устанавливаем длину
    {
        if (length1 > 0)
            length = length1;
        else
            cout << "ошибка";
    }

    float LaptopBag::get_height()                   // получаем высоту
    {
        return height;
    }

    void LaptopBag::set_height(float height1)       // устанавливаем высоту
    {
        if (height1 > 0)
            height = height1;
        else
            cout << "ошибка";
    }

    float LaptopBag::get_width()                    // получаем ширину
    {
        return width;
    }

    void LaptopBag::set_width(float width1)         // устанавливаем ширину
    {
        if (width1 > 0)
            width = width1;
        else
            cout << "ошибка";
    }

    int LaptopBag::get_pocket()                     // получаем кол-во карманов
    {
        return pocket;
    }

    void LaptopBag::set_pocket(int pocket1)         // устанавливаем код-во карманов
    {
        if (pocket1 > 0)
            pocket = pocket1;
        else
            cout << "ошибка";
    }