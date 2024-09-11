/*
WAP to print sum and product of two numbers using sum() and product() functions
using concept of all constructors
*/

#include<iostream>
using namespace std;

class calc
{
    int n1,n2,sum,product;
public:
    calc()
    {
        n1=100;
        n2=50;
        sum = n1+n2;
        product = n1*n2;
        cout<<"Sum is "<<sum<<" and product is "<<product<<"."<<endl;
    }
    calc(int num1, int num2)
    {
        n1=num1;
        n2=num2;
        sum = n1+n2;
        product = n1*n2;
        cout<<"Sum is "<<sum<<" and product is "<<product<<"."<<endl;
    }
    calc(calc &obj)
    {
        n1=obj.n1;
        n2=obj.n2;
        sum = n1+n2;
        product = n1*n2;
        cout<<"Sum is "<<sum<<" and product is "<<product<<"."<<endl;
    }
};

int main()
{
    calc ul;
    calc ula(10,20);
    calc ulat(ul);
    calc ulate(ula);

    return 0;
}