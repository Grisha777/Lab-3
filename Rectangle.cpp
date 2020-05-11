#include <stdlib.h>
#include <iostream>
#include "Square.cpp"

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
       std::cout << "b=" << b <<endl;
    } 
};
