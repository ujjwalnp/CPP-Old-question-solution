/* WAP to print area of the three rooms usin differenttypes of constrctors
default -- parameterized constructor*/

#include<iostream>
using namespace std;

class Area
{
    int length, breadth;
public:
    Area()
    {
        cout<<"Enter length and breadth of room 1"<<endl;
        cin>>length>>breadth;
        cout<<"Area of room 1 is "<<length*breadth<<endl;
    }

    Area(int l, int b)
    {
        cout<<"Area of room 2: "<<l*b<<endl;
    }

    Area(double l, double b)
    {
        cout<<"Area of room 3: "<<l*b;
    }

};

int main(void)
{
    Area a;
    Area ar(12,12);
    Area are(1.2,2.5);
}