#include<iostream>
using namespace std;

class Square
{
private:
int num;

public:
    void getdata()
    {
        cout << "Enter the number"<<endl;;
        cin>>num;
    }
    void display()
    {
        cout << "Square of a given number= "<< num*num<<endl;
    }
};

int main()
{
    Square obj;
    obj.getdata();
    obj.display();
    return 0;
}