#include<iostream>
using namespace std;

class A
{
public:
    virtual void disp()=0;
};

class B:public A
{
public:
    void disp()
    {
        cout<<"Pure Virtual Function";
    }
};

int main()
{
A *p;
B o;
p = &o;
p -> disp();
return 0;
}

/*

Pure Virtual Function

*/
