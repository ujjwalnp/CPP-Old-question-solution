#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
   start:
    system("cls");
    int h = 0, m = 0, s = 0;
    // again for setting an alarm which produces sound for efficiency
    int h1 = 0, m1 = 0, s1 = 0;
    cout << "Enter in the proper format of HH:MM:SS" << endl;
    cin >> h >> m >> s;
    cout << "set the alaem in proper time format of HH:MM:SS" << endl;
    cin >> h1 >> m1 >> s1;
    if (h < 24 && m < 60 && s < 60)
    {
     

        for (h = 0; h < 24; h++)
        {
            for (m = 0; m < 60; m++)
            {
                for (s = 0; s < 60; s++)
                {
		            system("cls");
                    // This above code will cler the existing data
                    // This above code will cler the existing data
                    cout << h << ":" << m << ":" << s;
                    // for checkiung of and determination of AM and PM
                    if (h < 12)
                    {
                        cout << "PM";
                    }
                    else
                    {
                        cout << "AM";
                    }
                    if (h == h1 && m == m1 && s == s1)
                    {
                        cout<<"play the alarm"<<endl;
                    }
                    for (double i = 0; i < 99999999; i++)
                    {
                        i++;
                        i--;
                        // this will stop the time at each of the count of one  second
                    }
                }
                s = 0;
            }
            m = 0;
        }
        h = 0;
        goto start;
    }

    else
    {
        cout << "Enter the authentic correct time format HH:MM:SS" << endl;
    }
}