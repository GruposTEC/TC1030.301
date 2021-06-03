#include <iostream>
#include <string>
#include "impresora.h"
#include "miexcepcion.h"

using namespace std;

Impresora::Impresora(string nom, int nh)
{
    numhojas=nh;
    nombre=nom;
}

void Impresora::imprimir(string texto)
{
    int hojas = texto.length()/10;

    if(hojas > numhojas)
    {
        throw(MiExcepcion("Desde mi propia clase"));
        //throw(101);
        //throw("Error!! Numero de hojas insuficiente");

        //string men = "Error en fomra de string";
        //throw(men);
    }

    cout << "Impresora " << nombre << "imprime :" << texto << endl;

    numhojas = numhojas - hojas;

    cout << "Me quedan : " << numhojas << endl;

}

void Impresora::darhojas()
{
        numhojas= numhojas+100;   
        cout << "Recargando con 100 hojas" << endl; 
}