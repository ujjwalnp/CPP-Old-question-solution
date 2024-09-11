#include <iostream>
#include <string>
using namespace std;
class info
{
    string name[100];
    static int count;

public:
    void input()
    {
        static int n = 1;
        cout << "Press 0 for exit :" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << "name of the item :";
            cin >> name[i];

            if (name[i] == "0")
            {
                break;
            }

            else
            {
                count++;
                n++;
            }
        }
    }
    void output()
    {
        cout << endl;
        for (int i = 1; i <= count; i++)
        {
            cout << "name of the item :" << name[i] << endl;
        }
    }
    static void displaycount()
    {
        cout << "The total no. of items stored is : " << count << endl;
    }
};
int info::count;
int main()
{
    system("cls");
    info i;
    i.input();
    i.output();
    info::displaycount();
    return 0;
}
