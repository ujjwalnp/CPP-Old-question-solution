#include<iostream>
using namespace std;

template<class T>		//Template Function declaration
T maximum(T first, T second)	//Template Function definition
{
	if(first>second)
	{
		return first;
	}
	else
	{
		return second;
	}
}

int main()
{
	cout<<"The highest interger number is: "<<maximum(4,3)<<endl;
	cout<<"The highest float number is: "<<maximum(10.522,5.633)<<endl;
	//doesn't work with different parameters -- (2,3.2) (int,float) doesn't work.
	return 0;
}

