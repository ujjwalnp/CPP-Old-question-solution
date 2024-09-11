    /*
    friend function
    WAP to find the product of period of BEIT 2nd sem and 4th sem
    */

    #include<iostream>
    using namespace std;

    class sem2;
    class sem4;

    class sem2{
        int nop;        //number of periods
    public:
        void in()
        {
            cout<<"Enter your number of periods: ";
            cin nop;
        }

        friend void product(sem2 o1, sem4 o2);
    };

    class sem4{
        int nop;        //number of periods
    public:
        void in()
        {
            cout<<"Enter your number of periods: ";
            cin nop;
        }

        friend void product(sem2 o1, sem4 o2);
    };

    friend void product(sem2 o1, sem4 o2)
    {
        int pro;
        pro = o1.nop*o2.nop;
        cout<<"Product of number of period is: "<<pro;
    }

    int main()
    {
        sem2 sec;
        sem4 fou;
        sec.in();
        fou.in();
        product(sec,fou);

        return 0;
    }