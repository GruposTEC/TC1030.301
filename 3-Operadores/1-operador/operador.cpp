#include <iostream>
#include "operador.h"
using namespace std;

Punto::Punto(int x1,int y1)
{
    x = x1;
    y = y1;
}

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}

void Punto::impresion()
{
    cout << "El punto es : (" << x <<"," << y <<")" << endl;
}

Punto Punto::operator+(Punto &p)
{
    int x2 = x + p.getX();
    int y2 = y + p.getY();

    Punto ret(x2,y2);
    return ret;

}

Punto Punto::operator+(Punto *p)
{
    int x2 = x + p->getX();
    int y2 = y + p->getY();

    Punto ret(x2,y2);
    return ret;

}
