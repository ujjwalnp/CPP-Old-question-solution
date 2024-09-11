#include<iostream>
#include<conio.h>
using namespace std;

class Staff
{
    protected:
        char name[50];
        int id;

    public:
    void ReadData()
    {
        id = 201;
        name = "Sita";
    }

    void DisplayData()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
    }
};

class Fulltime: public Staff
{
    private:
        char post[50];
    public:
        void ReadData()
        {
            post = "CEO";
        }
        void DisplayData()
        {
            cout<<"Post:"<<post<<endl;
        }
};


int main()
{
    Fulltime Sita;
    
    Sita.Staff::ReadData();
    Sita.ReadData();

    cout<<endl<<"Display data"<<endl;
    
    Sita.Staff::DisplayData();
    Sita.DisplayData();
    
    getch();
    return 0;
}