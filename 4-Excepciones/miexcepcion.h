#ifndef MIEXCEPCION_H
#define MIEXCEPCION_H
#include <string>
#include <exception>

class MiExcepcion : public std::exception
{
    private:
    std::string texto;

    public:
    MiExcepcion(std::string txt);
    std::string mensaje(void);
    

};

#endif