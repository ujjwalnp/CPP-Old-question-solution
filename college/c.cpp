#include <iostream>
#include <string>
#include <windows.h>
// #include<windows.h>
// Sleep(milliseconds);
using namespace std;

class k
{
    int num, n = 1;
    string name[100];
    static int counter;

public:
    // IT IS THE INPUT SECTION
    void input()
    {
        // cout << "Press 1 to exit from the program" << endl;
        cout << "Enter the name of the item " << endl;
        for (int i = 0; i < n; i++)
        {
            Sleep(100);
            cin >> name[i];
            n++;
            counter++;
            cin >> num;
            if (num == 0)
            {
                break;
            }
            else
                continue;
        }
    }

    // IT IS THE OUTPUT SECTION
    void output()
    {
        cout << endl
             << "The name of the stored items is" << endl;
        for (int i = 0; i < counter; i++)
        {
            cout << name[i] << endl;
        }
    }
    static void dc()
    {
        cout << "Total no of stored items is : " << counter << endl;
    }
};
int k::counter;
int main()
{
    k c;
    c.input();
    c.output();
    k::dc();
    return 0;
}

/*

Yaha maile main kura chai user le input function ma ta jatti pani items haru halna milyo ni ta 
Ani yesi user lai for eg:5 item halesi input function bata bahira niklina mann xa re haina tara 
user le harek patak ko string input sang sangai num vanne varaible ko value ni magxa , so yesto huda user 
le harek patak ma number ko value haliraknu parxa, which is not simple and easy for each repeattion of loop
*/