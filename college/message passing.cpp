#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    int roll;
public:
    void getdata(int x)
    {
        roll=x;
    }

    void display()
    {
    cout<<"Roll number="<<roll;
    }
};


int main()
{
    student s;
    s.getdata(325); //objects passing message
    s.display(); //objects passing message
    getch();
    return 0;
}