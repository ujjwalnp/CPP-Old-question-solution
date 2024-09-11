#include<iostream>
#include<string.h>
using namespace std;

class Staff
{
privte:
    int id;
    string name;
public:
    void ReadData(int i, string n)
    {
        id = i;
        name = n;
    }
    void DisplayData()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name;
    }
};

class Fulltime:public Staff
{
private:
    string post;
public:
    void ReadData(int i, string n, string p)
    {
        post = p;
    }
    void DisplayData()
    {
        cout<<"Post: "<<post;
    }
};

int main()
{
    Fulltime Sita;

    Sita.Staff::ReadData(900, "Sita");
    Sita.ReadData("CEO");
    Sita.Staff::DisplayData();
    Sita.DisplayData();

    return 0;
}

