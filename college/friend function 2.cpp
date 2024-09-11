/*
friend function
WAP to add numbers in twow classes and display the output
*/


#include<iostream>
using namespace std;

class first; 
class second
{
    int num2;
public:
    void display()
    {
        cout<<"Enter a number: ";
        cin>>num2;
        cout<<"Num is "<<num2<<endl;
    }
    friend void addfxn(first obj1,second obj2);
};

class first
{
    int num;
public:
    void display()
    {
        cout<<"Enter a number: ";
        cin>>num;
        cout<<"Num is "<<num<<endl;
    }
    friend void addfxn(first obj1,second obj2);
};

void addfxn(first obj1,second obj2)
{
    int sum;
    sum = obj1.num+obj2.num2;
    cout<<"Sum of data of two function is "<<sum<<endl;
}

int main()
{
    first o1;
    second o2;
    o1.display();
    o2.display();
    addfxn(o1,o2);

    return 0;
}