#include<iostream>
using namespace std;

int main()
{
    int a = 2, b = 0;
    int c;

    try
    {
        if(b==0)
            throw 1;
        else
            c=a/b;
            cout<<c<<endl;
    }
    catch(int x)
    {
        cout<<"Divided by 0 case";
    }

    return 0;
}
