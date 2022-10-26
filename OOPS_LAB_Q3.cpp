#include<iostream>
using namespace std;
class timer
{
    int mins;
    int sec;
    int hrs;
    public:
    void gets()
    {
        int minutes,seconds,houres;
        cout<<"Enter the time in mins:"<<endl;
        cin>>minutes;
        cout<<"Enter the time in seconds:"<<endl;
        cin>>seconds;
        cout<<"Enter the time in houres:"<<endl;
        cin>>houres;
        if(seconds>=60)
        {
            seconds=seconds/60;
            minutes++;
        }
        if(minutes >=60)
        {
            minutes=minutes/60;
            houres++;
        }
        hrs=houres;
        mins=minutes;
        sec=seconds;
    }
    void display()
    {
        cout<<"The time is given by"<<endl;
        cout<<hrs<<" Hours "<<mins<<" Minutes "<<sec<<" Second "<<endl;
    }
    void operator == (const timer b1)
    {
        if(hrs == b1.hrs && sec == b1.sec && mins == b1.mins)
        {
            cout<<"Both time are equal"<<endl;
        }
        else
        {
            cout<<"Both Time are not equal"<<endl;
        }
    }
};
int main()
{
    timer t1;
    t1.gets();
    t1.display();
    timer t2;
    t2.gets();
    t2.display();
    t1==t2;
}