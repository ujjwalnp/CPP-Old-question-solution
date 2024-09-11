#include<iostream>
using namespace std;

class items
{
char name[20];
float price;
static int counter;

public:
void IO();
static void Counter();
};

int items::counter={0};
void items::IO()
{
    cout<<"Enter a name and price of item: "<<endl;
    cin>>name>>price;
    cout<<"Name is "<<name<<" and price is "<<price<<endl;
    counter++;
}
void items::Counter()
{
    cout<<"Counter: "<<counter<<endl;
}

int main()
{
    items i1,i2,i3;
    i1.IO();
    i1.Counter();
    i2.IO();
    i2.Counter();
    i3.IO();
    i3.Counter();

    return 0;
}