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
        cout << "perimetr=" << Perimeter() << endl;
    }
};
