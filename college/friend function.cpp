/*
friend funciton
wap to add 100 to num in a class using friend function
*/

#include<iostream>
using namespace std;

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
    
    friend void frnfxn(first obj);     //friend return_type function_name(class_name object_name)
};

void frnfxn(first obj)
{
    int sum;
    sum = obj.num + 100;
    cout<<"100 added is "<<sum<<endl;
}

int main()
{
    first lass;
    lass.display();
    frnfxn(lass);       //fruend_fuction_name(object_name);
    
    return 0;   
}