#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A
{
    int x,y;
public:

     A()
     {
         cout << "Default constructor called!";
     }
     A(int a,int b)
     {
         cout << "Parametrized Constructor called!\n";
         x=a;
         y=b;
     }
    /* A(const A & old )
     {
         // shallow copy
        x = old.x;
        y = old.y;

        cout << "Copy Constructor called!\n";
     }
     */

     void print()
     {
         cout << x << " " << y << "\n";
     }

};

int main()
{
      A obj(10,20); 
      A obj2(obj);  
      cout<<"\n\nShallow copy\n\n";
      obj2.print();

    return 0;
}