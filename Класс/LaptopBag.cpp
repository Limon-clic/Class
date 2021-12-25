#include "LaptopBag.h"

    LaptopBag::LaptopBag()                                  // ����������� ������ (�� ���������)
    {
        set_material("���-����");
        set_weight(300);
        set_length(360);
        set_height(260);
        set_width(40);
        set_pocket(3);
    }

    LaptopBag::LaptopBag(float length1, float height1, float width1, float weight1, int pocket1)
        // ������ ����������� ������ (� ����������)
        // ������, ������, ������, ���, ���-�� ��������
    {
        set_material("������");
        set_weight(weight1);
        set_length(length1);
        set_height(height1);
        set_width(width1);
        set_pocket(pocket1);
    }

    LaptopBag::LaptopBag(float length1, float height1, float width1, float weight1, int pocket1, const string &material1)
        // ������ ����������� ������ (� �����������)
        // ������, ������, ������, ���, ���-�� ��������, ��������, ������� ����� � �����
    {
        LaptopBag::set_values(length1, height1, width1, weight1, pocket1, material1);
    }

    void LaptopBag::set_values(float length1, float height1, float width1, float weight1, int pocket1, const string& material1)
        //����� ��� ��������
    {
        LaptopBag::set_weight(weight1);
        LaptopBag::set_length(length1);
        LaptopBag::set_height(height1);
        LaptopBag::set_width(width1);
        LaptopBag::set_pocket(pocket1);
        LaptopBag::set_material(material1);
    }

    LaptopBag::~LaptopBag() { }                             // ���������� ������{ }

    string LaptopBag::show() const                          // ����� ���������� � ���� ������
    {
        string str;
        str = "��������: " + material + "\n" +
        "���: " + to_string(weight) + "\n" +
        "�����: " + to_string(length) + "\n" +
        "������: " + to_string(height) + "\n" +
        "������: " + to_string(width) + "\n" +
        "����������� ��������: " + to_string(pocket) + "\n";
        return str;
    }

    string LaptopBag::get_material() const                  // �������� ��������
    {
        return material;
    }

    void LaptopBag::set_material(const string& material1)  // ������������� ��������
    {
        if ((material1 == "������") || (material1 == "������") || (material1 == "�������") || (material1 == "���-����") || (material1 == "������"))
            material = material1;
        else
        {
            cout << "������ � �������� ���������" << endl << endl;
            material = "---";
        }
    }

    float LaptopBag::get_weight()                   // �������� ���
    {
        return weight;
    }

    void LaptopBag::set_weight(float weight1)       // ������������� ���
    {
        if (weight1 > 0)
            weight = weight1;
        else
            cout << "������";
        //throw - 1;  // todo
    }

    float LaptopBag::get_length()                   // �������� �����
    {
        return length;
    }

    void LaptopBag::set_length(float length1)       // ������������� �����
    {
        if (length1 > 0)
            length = length1;
        else
            cout << "������";
    }

    float LaptopBag::get_height()                   // �������� ������
    {
        return height;
    }

    void LaptopBag::set_height(float height1)       // ������������� ������
    {
        if (height1 > 0)
            height = height1;
        else
            cout << "������";
    }

    float LaptopBag::get_width()                    // �������� ������
    {
        return width;
    }

    void LaptopBag::set_width(float width1)         // ������������� ������
    {
        if (width1 > 0)
            width = width1;
        else
            cout << "������";
    }

    int LaptopBag::get_pocket()                     // �������� ���-�� ��������
    {
        return pocket;
    }

    void LaptopBag::set_pocket(int pocket1)         // ������������� ���-�� ��������
    {
        if (pocket1 > 0)
            pocket = pocket1;
        else
            cout << "������";
    }