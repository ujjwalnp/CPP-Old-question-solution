/*
Single Inheritance -- base class = Numbers -- *n1,*n2,*sum  
                    -- derived class = Add -- +getNumbers(), +addition()
*/

#include<iostream>

using namespace std;

class Numbers
{
protected:
    int n1,n2,sum;
};

class Add:protected Numbers
{
public:
    void getNumbers()
    {
        cout<<"Duita anka haalnuhoss: ";
        cin>>n1>>n2;
    }
    void addition()
    {
        sum=n1+n2;
        cout<<endl<<"Tesko jod huncha: "<<sum;
    }
};

int main(void)
{
    Add anka;
    anka.getNumbers();
    anka.addition();

    return 0;
}