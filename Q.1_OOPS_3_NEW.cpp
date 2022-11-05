#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class Vehicle
{
    public:
        int mileage;
        int price;
        virtual void getdata()
        {
            cout<<"Enter the Mileage of Vehicle"<<endl;
            cin>>mileage;
            cout<<"Enter the Price of Vehicle:"<<endl;
            cin>>price;
        }
        virtual void showdata()
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
        void getdata()
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
        void showdata()
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
        void getdata()
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
        void showdata()
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
        void getdata()
        {
            cout<<"Enter Model type:"<<endl;
            gets(modeltype);
            cout<<endl;
        }
        void showdata()
        {
            cout<<"For Audi"<<endl;
            cout<<"MODEL TYPE="<<modeltype<<endl;
        }
};
class Ford:public Car
{
    public:
        char modeltype[50];
        void getdata()
        {
            cout<<"Enter Model type:"<<endl;
            gets(modeltype);
            cout<<endl;
        }
        void showdata()
        {
            cout<<"For Ford"<<endl;
            cout<<"MODEL TYPE="<<modeltype<<endl;
        }
};
class Bajaj:public Bike
{
    public:
        char modeltype[50];
        void getdata()
        {
            cout<<"Enter Model type:"<<endl;
            getchar();
            gets(modeltype);
            cout<<endl;
        }
        void showdata()
        {
            cout<<"For Bajaj"<<endl;
            cout<<"MODEL TYPE="<<modeltype<<endl;
        }
};
class TVS: public Bike
{
    public:
        char modeltype[50];
        void getdata()
        {
            cout<<"Enter Model type:"<<endl;
            getchar();
            gets(modeltype);
            cout<<endl;
        }
        void showdata()
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
                Car c1;
                Vehicle *v1=new Vehicle;
                v1->getdata();
                v1->showdata();
                v1=&c1;
                v1->getdata();
                v1->showdata();
                v1=&a1;
                v1->getdata();
                v1->showdata();
            }
            if(model==2)
            {
                Ford a1;
                Car c1;
                Vehicle *v1=new Vehicle;
                v1->getdata();
                v1->showdata();
                v1=&c1;
                v1->getdata();
                v1->showdata();
                v1=&a1;
                v1->getdata();
                v1->showdata();
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
                Bajaj a1;
                Bike c1;
                Vehicle *v1=new Vehicle;
                v1->getdata();
                v1->showdata();
                v1=&c1;
                v1->getdata();
                v1->showdata();
                v1=&a1;
                v1->getdata();
                v1->showdata();
            }
            if(model==2)
            {
                TVS a1;
                Bike c1;
                Vehicle *v1=new Vehicle;
                v1->getdata();
                v1->getdata();
                v1=&c1;
                v1->getdata();
                v1->showdata();
                v1=&a1;
                v1->getdata();
                v1->showdata();
            }
        }
}
