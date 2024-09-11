#include<iostream>

using namespace std;

inline int max(int a, int b)
{
    return (a>b)?a:b;
}

int main()
{
    int x,y;
    cout<<"Enter x and y:"<<endl;
    cin>>x>>y;
    cout<<"Maximum value is:"<<max(x,y);

    return 0;
}
