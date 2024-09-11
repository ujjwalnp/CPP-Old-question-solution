#include<iostream>
using namespace std;

template<class T>
T mul(T n1, T n2)
{
        return n1*n2;
}

int main()
{
        cout<<"The multiplication of two integers is: "<<mul(12,21)<<endl;
        cout<<"The multiplication of two floats is: "<<mul(1.23,3.21)<<endl;
        return 0;
}

