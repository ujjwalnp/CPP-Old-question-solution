/* multiple throws and multiple catches
 *
 * /*
 * WAP to input only +ve numbers.
 * If user inputs -ve number show   --  "Negative Numbers Not Allowed" as exception
 * If user inputs 0 number show   --  "Zero Not Allowed" as exception
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
            throw 1;
        else
            cout<<"You've entered: "<<PN;
    }
    catch(int x)
    {
        cout<<endl<<"Negative Numbers Not Allowed"<<endl<<endl;
    }

    try
    {
        if(PN==0)
            throw 1.1f;
    }
    catch(float y)
    {
        cout<<endl<<"Zero Not Allowed"<<endl<<endl;
    }

    return 0;
}
