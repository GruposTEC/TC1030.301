#include <iostream>

using namespace std;

void basico()
{
    int n  = 5;
    int *ap = NULL;

    cout << "Direccion de n : "  << &n << endl;

    ap = &n;

    cout << "Contenido del apuntador "  <<  ap  << endl;

    cout << "Contenido de lo que apunto " << *ap << endl;

    *ap = 10;

    cout << "Valor de n " << n << endl;
 
}

void arreglo()
{
    int ln = 5;
    int x[] = {256,1,2,3,4};

    for (int i = 0; i < ln; i++)
    {
        cout << "posicion :"  << i << " valor : " << x[i] << endl;
    }

    int *ap = &x[0];
    //cout << "Contenido de lo que apunto " << *ap << endl;

    /*for(int i = 0 ; i < ln ; i++)
    {
        cout << "Contenido de lo que apunto " << *ap << endl;
        ap++;
    }*/

    unsigned char * ap2 = (unsigned char *) &x[0];


    for(int i = 0 ; i < 4 ; i++)
    {
        int y = (int) *ap2;
        cout << "Contenido de lo que apunto " << y << endl;
        ap2++;
    }

}

int metodo(int *ap)
{
    *ap=19;
    *ap=29;
}

int metodo(int &ap)
{
    ap=19;
    ap=29;
}

int main(void)
{
    //basico();
    //arreglo();
    
    int x = 10;
    cout << x << endl;
    metodo(&x);
    cout << x << endl;
    
    return 0;
}