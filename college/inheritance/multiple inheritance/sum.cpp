#include<iostream>
using namespace std;

class Numbre1
{
protected:
    int Num1;
public:
    void ask1()
    {
        cout<<"Pahilo anka: ";
        cin>>Num1;
    }
};

class Numbre2
{
protected:
    int Num2;
public:
    void ask2()
    {
        cout<<"Pahilo anka: ";
        cin>>Num2;
    }
};

class Sum:public Numbre1,Numbre2
{
public:
    void um()
    {
        cout<<"Sum is "<<Num1+Num2;
    }
};

int main()
{
    Sum add;
    Sum.Num1 = Numbre1.Num1;
    Sum.Num2 = Numbre2.Num2;
    add.um
    return 0;
}