#include<iostream>
using namespace std;

template<class T>
T sum(T n1, T n2)
{
	return n1+n2;
}

int main()
{
	cout<<"The sum of two integers is: "<<sum(12,21)<<endl;
	cout<<"The sum of two floats is: "<<sum(1.23,3.21)<<endl;
	return 0;
}

