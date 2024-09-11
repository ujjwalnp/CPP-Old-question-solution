/*WAP to print sum and difference of two float numbers using all three types of constructors*/

#include<iostream>
using namespace std;

class calc
{
        float a,b;
public:
    calc()
    {
        float x=28.34, y=22.21;
        cout<<"Sum: "<<x+y<<endl<<"Difference: "<<x-y<<endl<<endl;
    }
    calc(float x, float y)
    {
        a=x;b=y;
        cout<<"Sum: "<<a+b<<endl<<"Difference: "<<a-b<<endl<<endl;
    }
    calc(calc &ulate)
    {
        a=ulate.a;
        b=ulate.b;
        cout<<"Sum: "<<a+b<<endl<<"Difference: "<<a-b;
    }   
};

int main()
{
    calc ua;
    calc mn(12.2,1.22);
    calc op(ua);
    calc opq(mn);

    return 0;
}


