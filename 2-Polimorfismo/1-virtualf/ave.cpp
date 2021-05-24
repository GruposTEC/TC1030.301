#include <iostream>

using namespace std;

class Ave  // clase abstracta
{
    int numeroAlas;
    public:
    Ave(){}
    Ave(int na)
    {
        numeroAlas = na ;
    }

    virtual void vuela() =0;

    Ave* next = NULL;
};

class Aguila : public Ave
{
    int numeroPies;

    public:
    Aguila(){}
    Aguila(int np,int na) : Ave(na)
    {
      numeroPies = np;
    }
  
    void vuela()
    {
        cout << "Soy el Ave que mejor vuela" << endl;
    }
};

class Pinguino :  public Ave
{
    public:
    void vuela()
    {
    
        cout << "Sere una Ave pero yo no vuelo" << endl;
    }
};

int main(void)
{
    Aguila agui(2,2);

    Pinguino happyfeet;
    

    Ave * av;

    av = &happyfeet;
    av->vuela();
    av = &agui;
    av->vuela();

    

}