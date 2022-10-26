#include<iostream>
using namespace std;
class distance12
{
    int feet;
    int inches;
    public:
    void getdist()
    {
        int f,i;
        cout<<"Enter the distance in feet:";
        cin>>f;
        cout<<"ENter the distance in inches:";
        cin>>i;
        if(i>=12)
        {
            i=i-12;
            f++;
        }
        feet=f;
        inches=i;
    }
    void display()
    {
        cout<<"The distance in feet and inches is:"<<endl;
        cout<<feet<<" Feet and "<<inches<<" inches "<<endl;

    }
    distance12 operator +(distance12 d1)
    {
        distance12 t1;
        t1.feet=feet+d1.feet;
        t1.inches=inches+d1.inches;
        cout<<"Sum of two distances is:"<<t1.feet<<" feet and "<<t1.inches<<" inches "<<endl;
        return t1;
    }
    distance12 operator +(int n)
    {
        distance12 t1;
        t1.feet=feet+4;
        t1.inches=inches+4;
        cout<<"After adding distance to 4 we get:"<<endl;
        cout<<t1.feet<<" Feet and "<<t1.inches<<" inches"<<endl;
        return t1;
    }
    void operator ==(const distance12 d1)
    {
        if(feet==d1.feet && inches==d1.inches)
        {
            cout<<"Both of the distances are equal"<<endl;
        }
        else
        {
            cout<<"Distances are not equal:"<<endl;
        }
    }
};
int main()
{
    distance12 d1;
    d1.getdist();
    d1.display();
    distance12 d2;
    d2.getdist();
    d2.display();
    distance12 d3;
    d3=d1+d2;
    distance12 d4;
    d4=d1+4;
    d1==d2;
}
    