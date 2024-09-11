/*
WAP to add, substract,product and reminder of two numbers in display() function using default 
constructor
*/

#include<iostream>
using namespace std;

class Number
{
private:
    int n1,n2;
public:
    Number()
    {
        n1=4;
        n2=8;
    }

    display()
    {
        int add,sub,pro,rem;
        add= n1+n2;
        sub= n1-n2;
        pro= n1*n2;
        rem= n1%n2;
        cout<<"Add: "<<add<<" Sub: "<<sub<<" Prouct: "<<pro<<" Rem: "<<rem<<endl;
    }
};

int main()
{
    Number no;
    no.display();

    return 0;
}