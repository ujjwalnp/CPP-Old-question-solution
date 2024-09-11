/*
 * Note: can't overload these operators   ::  .  .*  ?:
 * operator overloading is fuction of Polymorphism i.e OOP -- hence operator overloading isn't available in C
*/


#include<iostream>
using namespace std;

class Complex
{
    int real,imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i)
    {
        this->real = r;      //this
        this->imag = i;
    }
    void show()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    Complex operator +(Complex o) //copy constructor , operator is a keyword
    {
        Complex c;
        c.real = this->real + o.real;
        c.imag = this->imag + o.imag;
        return c;
    }
};

int main()
{
    Complex c1(2,3);
    cout<<endl<<"First Input"<<endl;
    c1.show();

    Complex c2(4,3);
    cout<<endl<<"Second Input"<<endl;
    c2.show();

    cout<<endl<<"Sum"<<endl;
    Complex c3;
    c3 = c1 + c2;
    c3.show();

    return 0;
}
