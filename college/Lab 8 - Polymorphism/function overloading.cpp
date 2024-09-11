#include<iostream>
using namespace std;

class fxnover
{
public:
    void sum(int a,int b)
    {
        int sum = a+b;
        cout<<"Sum: "<<sum<<endl;
    }
    void sum(double a, double b)
    {
        double sum = a+b;
        cout<<"Sum: "<<sum<<endl;
    }
};

int main()
{
    fxnover fo;
    fo.sum(1,2);
    fo.sum(1.2,2.1);
    return 0;
}
