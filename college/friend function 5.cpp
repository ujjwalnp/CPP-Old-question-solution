/*
friend function
WAP to find the diffrerence between number of books of person 1 and person 2.
*/

#include<iostream>
using namespace std;

class person2;
class person1;

class person1
{
    int nob;        //number of books
public:
    void num()
    {
        cout<<"Enter your number of books"<<endl;
        cin>>nob;
    }

    friend void diff(person1 obj1, person2 obj2);
};

class person2
{
    int nob;        //number of books
public:
    void num()
    {
        cout<<"Enter your number of books"<<endl;
        cin>>nob;
    }

    friend void diff(person1 obj1, person2 obj2);
};

void diff(person1 obj1, person2 obj2)
{
    int diff;
    if (obj1.nob > obj2.nob)
        diff = obj1.nob - obj2.nob;
    else
        diff = obj2.nob - obj1.nob;

    cout<<"The difference in your books is: "<<diff;
}

int main()
{
    person1 b1;
    person2 b2;
    b1.num();
    b2.num();
    diff(b1,b2);

    return 0;
}