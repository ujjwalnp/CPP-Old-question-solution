/*
Wap to print sum, difference, product and remainfder of two numbers using 
sum(), difference(), product() and remainder() functions by initializing using
parameterized cinstructor.
*/

#include<iostream>

using namespace std;

class calc
{
    int x,y;
public:
    calc(int n1, int n2)
    {
        x=n1;
        y=n2;
    }

    int sum()
    {
        int sum;
        sum = x+y;
        cout<<"sum: "<<sum<<endl;
    }

    int difference()
    {
        int diff;
        diff = x-y;
        cout<<"difference: "<<diff<<endl;
    }

    int product()
    {
        int product;
        product = x*y;
        cout<<"product: "<<product<<endl;
    }

    float remainder()
    {
        int rem;
        rem = x%y;
        cout<<"remainder: "<<rem<<endl;
    }
};

int main()
{
    int num1, num2;
    cout<<"Enter two numbers:\n";
    cin>>num1>>num2;
    
    calc op(num1,num2);
    op.sum();
    op.difference();
    op.product();
    op.remainder();

    return 0;
}