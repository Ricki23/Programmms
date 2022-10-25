#include<iostream>
#include<string.h>
using namespace std;
class datetime
{
    int years1;
    int months1;
    int days1;
    int hours1;
    int minutes1;
    int seconds1;
    public:
        void set_time()
        {
            cout<<"Enter the date in dd:mm:yy =";
            cin>>days1>>months1>>years1;
            cout<<"Enter the date in hh:mm:ss =";
            cin>>hours1>>minutes1>>seconds1;
        }
        void display()
        {
            cout<<"The date and time format is given by:"<<endl;
            cout<<"dd:mm:yy="<<days1<<"/"<<months1<<"/"<<years1<<endl;
            cout<<"hh:mm:ss="<<hours1<<":"<<minutes1<<":"<<seconds1<<endl;
        }
        void advance()
        {
            int seconds,minutes,hours,days,months,years;
            int inc1,inc2,inc3,inc4,inc5,inc6;
            cout<<"Enter the no of days months and years to be advanced:";
            cin>>inc1>>inc2>>inc3;
            cout<<"Enter the time to be advanced";
            cin>>inc4>>inc5>>inc6;

            seconds=seconds1+inc6;
            minutes=seconds/60;
            seconds=seconds%60;

            minutes=minutes+minutes1+inc5;
            hours=minutes/60;
            minutes=minutes%60;

            hours=hours+hours1+inc4;
            days+=hours%12;
            hours=hours%12;

            days=days1+inc3;

            months=months1+inc2;

            years=years1+inc3;

            cout<<"\n Time has been extended as shown below extended and shown below ->\n\n";
            cout<<"dd:mm:yy="<<days<<"/"<<months<<"/"<<years<<endl;
            cout<<"hh:mm:ss="<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
};

int main()
{
    datetime s1;
    datetime s2;
    s1.set_time();
    s1.display();
    s1.advance();
}
