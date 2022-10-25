#include<iostream>
#include<string.h>
using namespace std;
class distance2;
class distance1
{
	public:
		int feet;
		int inches;
	public:
		void set_distance()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
			cout<<"\n\n";
		}
		void get_distance()
		{
			cout<<"Distance is feet= "<<feet<<", inches= "<<inches<<endl;
		}
        friend float compare(distance1 d1,distance2 d2);
};
class distance2
{
    public:
        int meters;
        int centimeters;
    public:
        void set_distance2()
        {
            cout<<"Enter the distance in meters:";
            cin>>meters;
            cout<<"Enter the distance in centimeters:";
            cin>>centimeters;
        }
        void get_distance2()
        {
            cout<<"Distance in meters="<<meters<<", centimeters="<<centimeters<<endl;
        }
        friend float compare(distance1 d1,distance2 d2);
};
float compare(distance1 d1,distance2 d2)
{
    if((d1.feet*0.304)> d2.meters)
    {
        cout<<"The Distance in feet is greater than distance in meters";
    }
    else
    {
        cout<<"Distance in meters is greater than distance in inches:";
    }
    return 0;
}
int main()
{
    distance1 d1;
    distance2 d2;
    d1.set_distance();
    d2.set_distance2();
    d1.get_distance();
    d2.get_distance2();
    compare(d1,d2);
    return 0;
}

