//������ ���-20
#pragma once
#include <iostream>
#include <string>

using namespace std;

class LaptopBag         // �������� ��������
{
private:

    string material;    // ��������
    float weight;       // ���
    float length;       // �����
    float height;       // ������
    float width;        // ������
    int pocket;         // ����������� ��������
public:
    LaptopBag();        // �����. �� �����.
    ~LaptopBag();       // ����������
    LaptopBag(float length1, float height1, float width1, float weight1, int pocket1);                              // � ����������� 
    LaptopBag(float length1, float height1, float width1, float weight1, int pocket1, const string& material1);     // � �����������                                                                                                  // ����������

    string show() const;                            // ��������� ���� ���������� � ���� ������

    string get_material() const;                    // �������� ��������
    float get_weight();                             // ���
    float get_length();                             // �����
    float get_height();                             // ������
    float get_width();                              // ������
    int get_pocket();                               // ���-�� ��������

    void set_pocket(int pocket1);                   // ���������� ���-�� ��������
    void set_width(float width1);                   // ������
    void set_height(float height1);                 // ������
    void set_length(float length1);                 // �����
    void set_weight(float weight1);                 // ���
    void set_material(const string& material1);     // ��������
    void set_values(float length1, float height1, float width1, float weight1, int pocket1, const string& material1);   // ���������� ���� ��������   
};

