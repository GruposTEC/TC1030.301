#include <iostream>
#include "operador.h"
using namespace std;

int main(void)
{
    cout << "Si funciona!!!" << endl;
    Punto p(5,6);
    p.impresion();
    Punto p3(4,8);
    p3.impresion();
    
    Punto p4 = p + p3;
    Punto p5 = p + &p3;
    p4.impresion();
    p5.impresion();

    return 0;
}