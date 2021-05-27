#ifndef PUNTO_H
#define PUNTO_H
class Punto
{
    private:
    int x,y;

    public:
    Punto(int x1, int y1);
    int getX();
    int getY();
    void impresion();
    Punto operator + (Punto &p);
    Punto operator + (Punto *p);
};

#endif