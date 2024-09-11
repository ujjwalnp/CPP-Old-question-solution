#include<iostream>
using namespace std;

template<class T>               //single parameter
T mul(T n1, T n2, T n3)
{
        return n1*n2*n3;
}

int main()
{
        cout<<"The multiplication of two integers is: "<<mul(12,21,2)<<endl;
        cout<<"The multiplication of two floats is: "<<mul(1.23,3.21,2.1)<<endl;
        return 0;
}
