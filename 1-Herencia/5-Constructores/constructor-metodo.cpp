#include <iostream>
using namespace std;



class A
{
    public:
    int y;

    A(int x)
    {
        cout << "Constructor de A" << endl;
        y=x;
    }

    void display()
    {
         cout << "display de A" << endl;
    }
};

class B : public A
{
    public:
    int z;
    B(int w,int v) : A(v) //aqui se llama explicitamente el constructor con parametros de A
    {
         cout << "Constructor de B" << endl;
        z = w;
    }

    void display()
    {
        cout << "Variable heredada de A  y : " << y << endl;
        cout << "Variable z : " << z << endl;
        //desde aqui puedo llamar al mismo metodo de la superclase
        A::display();
    }

};

int main(void)
{
    B obj(5,6);
    obj.display();
    return 0;
}
