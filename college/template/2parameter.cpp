#include<iostream>
using namespace std;

template<class A,class B>
void maximum(A first, B second)
{
	if(first>second)
        {
                cout<<first;
        }
        else
        {
                cout<<second;
        }
}

int main()
{
        cout<<"Using different datatypes -- int , float "<<maximum(4,3.98)<<endl;
	return 0;
}

