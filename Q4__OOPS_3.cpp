#include <iostream> 
using namespace std;
class Role
{
    public:
        int n;
        int m;
        void getdata(int x,int y)
        {
            m=x;
            n=y;
        }
        void showdata()
        {
            cout<<"M="<<m<<endl;
            cout<<"N="<<n<<endl<<endl;
        }
        Role operator () (int x,int y)
        {
            Role r1;
            m=x;
            n=y;
            cout<<"M="<<m<<endl;
            cout<<"N="<<n<<endl<<endl;
            return r1;
        }
        Role operator ()()
        {
            Role r1;
            m=20;
            n=40;
            cout<<"M="<<m<<endl;
            cout<<"N="<<n<<endl<<endl;
            return r1;
        }
};
int main()
{
    Role t2;
    t2(20,30);
    Role t1;
    t1();
}
