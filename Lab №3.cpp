#include <stdlib.h>
#include <iostream>
#include "Square.cpp"
#include "Rectangle.cpp"
using namespace std;



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
