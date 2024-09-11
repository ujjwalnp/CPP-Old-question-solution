/* function
WAP to make a proogram having packets of items like biscuits, chips, chocolates,and pastries 12,20,34 and 4 respectively. (se defalt arguments concepts)
a) display the default values,
b) display info with change in packets of biscuits to 90,
c) display info with change in packets of chips to 100,
d) display info with change in packets of chocolates to 20,
e) display info with change in packets of chips to 80, pastries to 200,
f) change everything and display

*/

#include<iostream>
using namespace std;

void items(int pb=12, int pc=20, int pch=34, int ppa=45)
{
    cout<<"packets of biscuits: "<<pb<<endl;
    cout<<"packets of chips: "<<pc<<endl;
    cout<<"packets of chocolates: "<<pch<<endl;
    cout<<"packets of pastries: "<<ppa<<endl;
    cout<<"----------------------------------"<<endl;
}

int main()
{
    items();            //default values -q.a
    items(90);          //value of first item (biscuit) changes   -q.b
    items(12,100);      //q.c
    items(12,20,20);    //q.d
    items(12,80,34,200);//q.e
    items(9,8,10,7);    //q.f

    return 0;
}