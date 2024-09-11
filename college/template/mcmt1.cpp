// 1. Make a class template what will show the addition and subbtraction of two float numbers.
//2. Make a class template what will show the multiplication and division of two integer numbers.



#include<iostream>
using namespace std;

template<class I, class F>
class AB
{
    F add, sub;
    I  mul, div;
public:
    void Add(F a, F b)
    {
        add = a + b;
        cout<<"The addition is "<<add<<endl;
    }
    void Sub(F a, F b)
    {
        sub = a - b;
        cout<<"The subbtraction  "<<sub<<endl;
    }
    void Mul(I a, I b)
    {
        mul = a * b;
        cout<<"The multiplication is "<<mul<<endl;
    }
    void Div(I a, I b)
    {
        div = a / b;
        cout<<"The division is "<<div<<endl;
    }
};

int main()
{
    AB<int,float>ab;
    ab.Add(21.2,21.2);
    ab.Sub(22.1,2.21);
    ab.Mul(1,2);
    ab.Div(2,1);
    return 0;
}
