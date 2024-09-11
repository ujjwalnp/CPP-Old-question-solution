#include <iostream>
using namespace std;

class Complex
{
private:
    int real,imag ;
public:
    Complex()
    {
        real=0;
        imag=0;
    }

    void display( )
    {
        cout<<"Real part="<<real<<endl;
        cout<<"Imaginary part="<<imag<<endl ;
    }
} ;

int main( )
{
    Complex c1;
    c1.display();
    return 0;
}