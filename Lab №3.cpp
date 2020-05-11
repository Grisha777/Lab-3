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
        cout << "perimetr=" << rect->Perimeter() << endl;

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

    system("pause");
    return 0;
}
