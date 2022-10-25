#include<iostream>
using namespace std;
class time1
{
    int hour;
    int minute;
    public:
        time1()
        {
            hour=0;
            minute=0;
            cout<<"Default constructor called"<<endl;
            cout<<"By default the time is"<<endl;
            cout<<hour<<" hour"<<minute<<" minutes"<<endl;
        }
        time1(int hour,int minute=0)
        {
            cout<<"The time is given by:"<<endl;
            cout<<hour<<" hour"<<minute<<" minutes"<<endl<<endl;
        }
        ~time1()
        {
            cout<<"Destructor called"<<endl;
        }
};
int main()
{
    time1 t1;
    int hour,minute;
    cout<<"Enter the time in hh and mm format:";
    cin>>hour>>minute;
    time1 t2(hour,minute);
}