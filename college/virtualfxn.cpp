#include<iostream>
using namespace std;

class Base
{
public:
    virtual void disp()
    {
        cout<<"Base Class";
    }
};

class Derived: public Base
{
public:
    void disp()
    {
        cout<<"Derived Class";
    }
};

int main()
{
    Base *p;    //pointer
    Derived d;  //object
    p = &d;     //pointer pointing to object of derived class
    p -> disp();    //invokes function of derived class
    return 0;
}
