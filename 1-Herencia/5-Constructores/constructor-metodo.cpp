#include <iostream>

using namespace std;

class Ave
{
    int numeroAlas;
    public:
    Ave(){}
    Ave(int na)
    {
        numeroAlas = na ;
    }

    void display()
    {
        cout << "Display desde clase Ave" << endl;
    }
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
    void display3()
    {
        Ave::display();
    }
    void display()
    {
        Ave::display();
        cout << "Display desde la clase Aguila" << endl;
    }
};

int main(void)
{
    Aguila agui(2,2);
    agui.display();

}

