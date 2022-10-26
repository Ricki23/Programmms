#include<iostream>
using namespace std;
class dist
{
    int meters;
    int centi;
    public:
    void gets()
    {
        int centimeters,meters1;
        cout<<"Enter the distance in meters:"<<endl;
        cin>>meters1;
        cout<<"Enter the distance in centimeters"<<endl;
        cin>>centimeters;
        if(centimeters>=100)
        {
            centimeters=centimeters-100;
            meters1++;
        }
        meters=meters1;
        centi=centimeters;
    }
    void display()
    {
        cout<<"The distance is given by:"<<endl;
        cout<<meters<<" meter + "<<centi<<" centimeters "<<endl;
    }
    void operator < (const dist d1)
    {
        if(meters<d1.meters && centi<d1.centi )
        {
            cout<<"Second distance is greater"<<endl;
        }
        else
        {
            cout<<"First distance is greater"<<endl;
        }
    }
};
int main()
{
    dist d1;
    d1.gets();
    d1.display();
    dist d2;
    d2.gets();
    d2.display();
    d1<d2;
}