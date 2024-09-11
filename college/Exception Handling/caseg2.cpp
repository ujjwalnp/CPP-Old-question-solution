/*
 * WAP to input only +ve numbers. If user inputs -ve number show
 * "Negative Numbers Not Allowed" as exception
 */



#include<iostream>
using namespace std;

int main()
{
    int PN;
    cout<<"Input any positive number"<<endl;
    cin>>PN;
    try
    {
        if(PN<0)
            throw 0;
        else
            cout<<"You've entered: "<<PN;
    }
    catch(int x)
    {
        cout<<endl<<"Negative Numbers Not Allowed"<<endl<<endl;
    }
    return 0;
}
