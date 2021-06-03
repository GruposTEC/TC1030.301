#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <string>

class Impresora
{
    private:
    int numhojas;
    std::string nombre;

    public:
    Impresora(std::string nom, int nh);
    void imprimir(std::string texto);
    void darhojas();
    
};

#endif 