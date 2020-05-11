#include <iostream>

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
        std::cout << "a=" << a <<endl;
        std::cout << "perimetr=" << Perimeter() << endl;
    }
};
