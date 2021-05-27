#include <iostream>
using namespace std;

void  paso(int n)
{
    n=n+1;
    cout << " El valor de n es :" << n << endl;
}

void paso_apuntador(int * ap2)
{
    *ap2 = *ap2 +1;
    cout << " El valor del aputnador dentro del meteodo es :" << *ap2 << endl;
}

void paso_referencia(int &ref)
{
    ref = ref +1;
}

int main(void)
{
    int num = 5;

    int * ap = NULL;
    ap = & num;

    int &ref = num;

    cout << " La direccion de num es :" << &num << endl;
    cout << "Apuntador : " << *ap << " y su direccion : " << ap  << endl; 
    *ap = 7 ;
    cout << "El valor de num es :" << num << endl;

    cout << "El valor de la referencia es : " << ref << endl;

    int num2 = 6;

    ap = &num2;
    ref = num2;   //num=num2

    //&ref = num2;   //NO se puede hacer

    cout << "El valor de la referencia es : " << ref << endl;
    cout << "El valor de num es :" << num << endl;

    //paso(num2);
    //paso_apuntador(ap);  //equivalente &num2
    paso_referencia(num2);

    cout << "El valor de num2 es :" << num2 << endl;

    return 0;
}