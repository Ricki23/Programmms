#include<iostream>
#include<string>
#include<cstring>
class num
{
    int n;
    char name[50];
    public:
        ~num() //destructor
        {
            std::cout<<"\nDestructor called"<<std::endl;
        }
        num() //default constructor
        {
            std::cout<<"Default constructor called:"<<std::endl;
        }
        num(int x,char y[]) //parameterised constructor
        {
            std::cout<<"Enter the student ID"<<std::endl;
            getchar();
            gets(y);
            std::cout<<"Enter the roll no"<<std::endl;
            std::cin>>x;
            n=x;
            strcpy(name,y);
            std::cout<<"\nThe details of the student are:"<<std::endl;
            std::cout<<"\nName of student:"<<name<<std::endl;
            std::cout<<"\nRoll No of student:"<<n<<std::endl;
        }
        num (num &rat) //copy constructor called Deep copy
        {
            std::cout<<"Copy constructor called:"<<std::endl;
            std::cout<<"\nThe details of the student are:"<<std::endl;
            std::cout<<"\nName of student:"<<rat.name<<std::endl;
            std::cout<<"\nRoll No of student:"<<rat.n<<std::endl;
        }
        void display()
        {
            std::cout<<"\nThe details of the student are:"<<std::endl;
            std::cout<<"\nName of student:"<<name<<std::endl;
            std::cout<<"\nRoll No of student:"<<n<<std::endl;
        }
};

int main()
    int x2;
    char name2[50];
    num n1;
    num n2(x2,name2);
    num n3(n2); 
    //std::cout<<"Shallow Copy"<<std::endl;
    //n3.display();//copy constructor called    
}