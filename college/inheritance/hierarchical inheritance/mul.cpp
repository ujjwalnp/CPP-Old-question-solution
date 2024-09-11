/*

*/

#include<iostream>

using namespace std;

class Numbers
{
protected:
    int n1,n2,sum,diff,mul;
};

class Add:protected Numbers
{
public:
    void getNumbers()
    {
        cout<<"Duita anka haalnuhoss: ";
        cin>>n1>>n2;
    }
    void calcultaion()
    {
        sum=n1+n2;
        cout<<endl<<"Tesko jod huncha: "<<sum;
    }
};

class Sub:protected Numbers
{
public:
    void getNumbers()
    {
        cout<<"Duita anka haalnuhoss: ";
        cin>>n1>>n2;
    }
    void calcultaion()
    {
        diff=n1-n2;
        cout<<endl<<"Tesko gathau huncha: "<<diff;
    }
};

class Multiply:protected Numbers
{
public:
    void getNumbers()
    {
        cout<<"Duita anka haalnuhoss: ";
        cin>>n1>>n2;
    }
    void calcultaion()
    {
        mul=n1*n2;
        cout<<endl<<"Tesko gudan huncha: "<<mul;
    }
};


int main(void)
{
    Add anka;
    anka.getNumbers();
    anka.calcultaion();
    cout<<endl;
    Sub nka;
    nka.getNumbers();
    nka.calcultaion();
    cout<<endl;
    Multiply ka;
    ka.getNumbers();
    ka.calcultaion();

    return 0;
}