#include <string>
#include "miexcepcion.h"

MiExcepcion::MiExcepcion(std::string txt)
{
    texto = txt;
}

std::string MiExcepcion::mensaje()
{
    return texto;
}