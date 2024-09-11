#include<iostream>
using namespace std;

template<class T>
class Test
{
    T a;
public:
    void add(T x, T y)
    {
        a = x+y;
    }
    void show()
    {
        cout<<a<<endl;
    }
};

int main()
{
    Test<float>te;
    te.add(12.2f,2.21f);
    te.show();
    return 0;
}
