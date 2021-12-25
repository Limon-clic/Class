//Райков ИВТ-20
#pragma once
#include <iostream>
#include <string>

using namespace std;

class LaptopBag         // сумкадля ноутбука
{
private:

    string material;    // материал
    float weight;       // вес
    float length;       // длина
    float height;       // высота
    float width;        // ширина
    int pocket;         // колличество карманов
public:
    LaptopBag();        // конст. по умолч.
    ~LaptopBag();       // деструктор
    LaptopBag(float length1, float height1, float width1, float weight1, int pocket1);                              // с параметрами 
    LaptopBag(float length1, float height1, float width1, float weight1, int pocket1, const string& material1);     // с параметрами                                                                                                  // деструктор

    string show() const;                            // получение всей информации в виде строки

    string get_material() const;                    // получить материал
    float get_weight();                             // вес
    float get_length();                             // длину
    float get_height();                             // высоту
    float get_width();                              // ширину
    int get_pocket();                               // кол-во карманов

    void set_pocket(int pocket1);                   // установить кол-во карманов
    void set_width(float width1);                   // ширину
    void set_height(float height1);                 // высоту
    void set_length(float length1);                 // длину
    void set_weight(float weight1);                 // вес
    void set_material(const string& material1);     // материал
    void set_values(float length1, float height1, float width1, float weight1, int pocket1, const string& material1);   // заполнение всех знасений   
};

