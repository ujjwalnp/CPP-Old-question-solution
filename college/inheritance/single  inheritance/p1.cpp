/*WAP to create a class called fruit with constructor displaying "i am fruit".
Create a derived class named Banana with constructor displaying "i am banana".
i. Make object of fruit only
ii. Make object of banana only
iii. Make objects of both fruit and mango
*/

#include<iostream>

using namespace std;

class Fruit
{
public:
    Fruit()
    {
        cout<<"i am fruit";
    }
};

class Banana:public Fruit
{
public:
    Banana()
    {
        cout<<"i am banana";
    }
};

int main()
{
    cout<<"i. Make object of fruit only"<<endl;
    Fruit fr;
    cout<<endl<<endl<<"ii. Make object of banana only"<<endl;
    Banana bn;
    cout<<endl<<endl<<"iii. Make objects of both fruit and mango"<<endl;
    Fruit ft;
    Banana baanaanaa;

    return 0;
}