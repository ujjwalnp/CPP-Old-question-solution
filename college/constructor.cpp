#include<iostream>
#include<conio.h>

using namespace std;

class counter
{
    int count;
public:
    counter(int num)
    {
        count = num;
        cout <<"count: "<<count;
    }
};

int main()
{
    counter c1(11);
    return 0;
}