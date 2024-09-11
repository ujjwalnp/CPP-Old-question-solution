#include<iostream>
using namespace std;

class Example
{
    int n1,n2;
public:
    Example()
    {
        n1=100;
        n2=50;
    }
    Example(int num1, int num2)
    {
        n1=num1;
        n2=num2;
    }
    Example(Example &obj)
    {
        n1=obj.n1;
        n2=obj.n2;
    }

    void display()
    {
        cout<<"n1 ="<<n1<<"\t n2="<<n2<<endl;
    }
};

int main()
{
    Example e1(10,5);       //parameterized constructor
    e1.display();           //10 5 will be displayed
    Example e2(e1);         //copy constructor -- e2 copies e1
    e2.display();           //10 5
    Example e3;             //default constructor
    e3.display();           //100 50
    Example e4(e3);         //e4 copies e3 -- 100 50 from default
    e4.display();

    return 0;
}