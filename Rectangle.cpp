#include <stdlib.h>
#include <iostream>
#include "Square.cpp"
using namespace std;

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
