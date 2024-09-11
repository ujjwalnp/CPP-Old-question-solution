#include<iostream>
using namespace std;

class Base
{
public:
    virtual void print()    //virtual in base clsas doesn't get invoked
    {
        cout<<"Print base class"<<endl;
    }
    void show()
    {
        cout<<"Show base class"<<endl;    
    }
};

class Derived: public Base
{
public:
    void print()
    {
        cout<<"Print derived class"<<endl;
    }
    void show()
    {
        cout<<"Show derived class"<<endl;    
    }
};

int main()
{
    Base *bptr;
    Derived d;
    btpr = &d;

    bptr -> print();    //virtaual function bind at runtime
    bptr -> show();     //non virtual function. bind at compile time
    return 0;
}

/*


Print Derived Class
Show Derived Class

*/
