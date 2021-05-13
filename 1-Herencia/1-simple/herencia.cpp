#include <iostream>
#include <string>

using namespace std;

class Base
{
    private:
    int telefono =5520;

    protected:
    string direccion= "Mexico";

    public:
    Base()
    {
        cout << "Constructor en clase base" << endl;
    }

    Base(int t, string d)
    {
        telefono = t;
        direccion = d;
    }

    int getTelefono()
    {
        return telefono;
    }
    string getDireccion()
    {
        return direccion;
    }
};
class Derivada : public Base
{   
    private:
    int id;

    public:
    Derivada ()
    {
        cout << "Constructor en clase derivada" << endl;
    }
    
    Derivada(int t, string d,int i)
    {
        Base::Base(t,d);
        id = i;
    }

    void display()
    {
      cout << getTelefono() << endl;
      cout << getDireccion() << endl;
      cout << id << endl;
    }

};
int main()
{
    Derivada ob(6666,"EU",5);

    ob.display();

    return 0;
}