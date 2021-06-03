#include <iostream>
#include <string>
#include "impresora.h"
#include "miexcepcion.h"

using namespace std;

int main(void)
{
    Impresora mia("Brother XL", 10);

    try
    {
        mia.imprimir("Imprimo cualquier cosa para gastar hojas");
        mia.imprimir("Imprimo cualquier cosa para gastar hojas");
        mia.imprimir("Imprimo cualquier cosa para gastar hojas");
        mia.imprimir("Imprimo cualquier cosa para gastar hojas");
        mia.imprimir("Imprimo cualquier cosa para gastar hojas");
    }
    catch(int &err)
    {
       cout << "El error atrapado es :"  << err << endl;
       mia.darhojas();

    }
    catch(string &err)
    {
        cout << err << endl;
    }
    catch(const char* err)
    {
        cout << err << endl;
    }
    catch(MiExcepcion &err)
    {
        cout << "El error es : " <<err.mensaje() << endl;
        cout << err.what() << endl;
    }
    catch(...)
    {
        cout << "Atrapatodo" << endl;
    }
    
    mia.imprimir("Imprimo nuevamente cosa para gastar hojas");
    
    


}