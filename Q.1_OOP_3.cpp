#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class Vehicle
{
    public:
        int mileage;
        int price;
        void getdata()
        {
            cout<<"Enter the Mileage of Vehicle"<<endl;
            cin>>mileage;
            cout<<"Enter the Price of Vehicle:"<<endl;
            cin>>price;
        }
        void showdata()
        {
            cout<<"MILEAGE="<<mileage<<endl;
            cout<<"PRICE="<<price<<endl;
        }
};
class Car:public virtual Vehicle
{
    public:
        int owner_cost;
        int warr;
        char *fuel_type;
        void getdata_car()
        {
            fuel_type=new char[50];
            cout<<"Enter the Ownership Cost of Car:"<<endl;
            cin>>owner_cost;
            cout<<"Enter the warranty of the Car:"<<endl;
            cin>>warr;
            cout<<"Enter the fuel type of the Car:"<<endl;
            getchar();
            gets(fuel_type);
        }
        void showdata_car()
        {
            cout<<"OWNERSHIP-COST="<<owner_cost<<endl;
            cout<<"WARRENTY="<<warr<<endl;
            cout<<"FUEL-TYPE="<<fuel_type<<endl;
        }
};
class Bike:public virtual Vehicle
{
    public: 
        int cylind;
        int gears;
        char wtype[5];
        int fuel_size;
        void getdata_bike()
        {
            cout<<"Enter the number of cylinders:"<<endl;
            cin>>cylind;
            cout<<"Enter the number of gears:"<<endl;
            cin>>gears;
            cout<<"Enter the type of wheel in Bike:"<<endl;
            getchar();
            gets(wtype);
            cout<<"Enter the fuel tank size of the Bike:"<<endl;
            cin>>fuel_size;
        }
        void showdata_bike()
        {
            cout<<"For Bike:-"<<endl;
            cout<<"NUMBER OF CYLINDERS="<<cylind<<endl;
            cout<<"NUMBER OF GEARS="<<gears<<endl;
            cout<<"TYPE OF WHEEL="<<wtype<<endl;
            cout<<"FUEL SIZE="<<fuel_size<<endl;
        }
};
class Audi:public Car 
{
    public:
        char modeltype[50];
        void getdata_audi()
        {
            cout<<"Enter Model type:"<<endl;
            gets(modeltype);
            cout<<endl;
        }
        void showdata_audi()
        {
            cout<<"For Audi"<<endl;
            cout<<"MODEL TYPE="<<modeltype<<endl;
        }
};
class Ford:public Car
{
    public:
        char modeltype[50];
        void getdata_ford()
        {
            cout<<"Enter Model type:"<<endl;
            gets(modeltype);
            cout<<endl;
        }
        void showdata_ford()
        {
            cout<<"For Ford"<<endl;
            cout<<"MODEL TYPE="<<modeltype<<endl;
        }
};
class Bajaj:public Bike
{
    public:
        char modeltype[50];
        void getdata_bajaj()
        {
            cout<<"Enter Model type:"<<endl;
            getchar();
            gets(modeltype);
            cout<<endl;
        }
        void showdata_bajaj()
        {
            cout<<"For Bajaj"<<endl;
            cout<<"MODEL TYPE="<<modeltype<<endl;
        }
};
class TVS: public Bike
{
    public:
        char modeltype[50];
        void getdata_tvs()
        {
            cout<<"Enter Model type:"<<endl;
            getchar();
            gets(modeltype);
            cout<<endl;
        }
        void showdata_tvs()
        {
            cout<<"For TVS"<<endl;
            cout<<"MODEL TYPE="<<modeltype<<endl;
        }
};
int main()
{
    int option,model;
    cout<<"1.Car\n";
    cout<<"2.Bike\n";
    cout<<"ENter your choice:";
    cin>>option;
        if(option==1)
        {
            cout<<"1.Audi\n";
            cout<<"2.Ford\n";
            cout<<"Enter the model:"<<endl;
            cin>>model;
            if(model==1)
            {    
                Audi a1;
                a1.getdata();
                a1.getdata_car();
                a1.getdata_audi();
                a1.showdata();
                a1.showdata_car();
                a1.showdata_audi();
            }
            if(model==2)
            {
                Ford a1;
                a1.getdata();
                a1.getdata_car();
                a1.getdata_ford();
                a1.showdata();
                a1.showdata_car();
                a1.showdata_ford();
            }
        }
        if(option==2)
        {
            cout<<"1.Bajaj\n";
            cout<<"2.TVS\n";
            cout<<"Enter the model"<<endl;
            cin>>model;
            if(model==1)
            {
                Bajaj b1;
                b1.getdata();
                b1.getdata_bike();
                b1.getdata_bajaj();
                b1.showdata();
                b1.showdata_bike();
                b1.showdata_bajaj();
            }
            if(model==2)
            {
                TVS b1;
                b1.getdata();
                b1.getdata_bike();
                b1.getdata_tvs();
                b1.showdata();
                b1.showdata_bike();
                b1.showdata_tvs();
            }
        }
}
