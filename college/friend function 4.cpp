/*
friend function
WAP to add two numbers in class 1 and two numbers in class 2 and display the output
*/


#include<iostream>
using namespace std;

class first;
class second;
 
class second
{
    int num2,num1;
public:
    void display()
    {
        cout<<"Enter two numbers: ";
        cin>>num2>>num1;
        cout<<"Numbers are "<<num2<<" and "<<num1<<endl;
    }
    friend void addfxn(first obj1,second obj2);
};

class first
{
    int num4,num3;
public:
    void display()
    {
        cout<<"Enter two number: ";
        cin>>num3>>num4;
        cout<<"Numbers are "<<num3<<" and "<<num4<<endl;
    }
    friend void addfxn(first obj1,second obj2);
};

void addfxn(first obj1,second obj2)
{
    int sum;
    sum = obj1.num3+obj2.num2+obj1.num4+obj2.num1;
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