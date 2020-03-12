#include <stdlib.h>
#include <iostream>
using namespace std;

class square // класс квадрат
{
protected:
    double a;
public:
    square(double a) // инициализация поля 
    {
        this->a = a;
    }
    virtual double Perimeter() // Функция возвращает - периметр
    {
        return 4*a;
    }
    virtual void print()
    {
        cout << "a=" << a <<endl;
    }
};

class rectangle: public square // класс прямоугольник
{
    double b;
public:
    rectangle(double a, double b) : square(a)
    {
       this->b = b;
    }
    double Perimeter()// Функция возвращает - периметр
    {
        return 2*(a+b);
    }
   void print()
    {
       square::print();
       cout << "b=" << b <<endl;
    } 
};

int main(int argc, int* argv[])
{
    double Rez;
    square p1(11.0); // Создается объект с вызовом конструктора
    square *z;
    z = &p1;
    z->print();
    Rez = z->Perimeter();
    cout << "Rez=" << Rez << endl;

    rectangle p2(11.0, 13.0);
    square* rect = &p2;
    rect->print();
    cout << "perimetr=" << rect->Perimeter() << endl;

    system("pause");
    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

