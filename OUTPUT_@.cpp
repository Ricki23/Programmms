#include<iostream>
using namespace std;
class demo
{
    static int cnt;
    int data;
    public:
    demo(int d)
    {
        data=d;
        cnt++;
    }
    ~demo()
    {
        cnt--;
    }
    void show()
    {
        cout<<"Value"<<'\t'<<data<<'\t'<<cnt<<endl;
    }
    static void fun(demo &ob)
    {
        demo temp(ob.data);
        temp.show();
        ob.show();
    }
};
int demo::cnt;
int main()
{
    demo obj1(20);
    obj1.show();
    demo::fun(obj1);
    obj1.show();
    demo obj2(30);
    obj1.show();
    obj2.show();
    return 0;
}