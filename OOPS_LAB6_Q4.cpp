#include<iostream>
using namespace std;
class parent
{
    public:
    int x=0;
    int y=0;
    parent()
    {
        cout<<"The constructor is called:"<<endl<<endl;
        x++;
        cout<<"Number of times constructor called for one object: "<<x<<endl<<endl;
    }
    ~parent()
    {
        cout<<"Destructor called:"<<endl<<endl;
        y++;
        cout<<"Number of times constructor called for one object: "<<y<<endl<<endl;
    }
};
int main()
{
    parent obj1;
    parent obj2;
    return 0;
}