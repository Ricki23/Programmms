#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class Books
{
    char title[100];
    char author[100];
    int price;
    char publisher[100];
    int stock;
    public:
        int compare_author(char input[])
        {
            int res;
            res=strcmp(author,input);
            if(res==0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        int compare_title(char input2[])
        {
            int res2;
            res2=strcmp(title,input2);
            if(res2==0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        void compare_copies(int n)
        {
              if(stock>=n)
              {
                    cout<<"Cost of"<<n<<"books is:Rs"<<price*n<<endl;;
              }
              else
              {
                    cout<<"Required copies not in stock"<<endl;
              }
        } 
        void getdata()
        {
            cout<<"ENter the title of the book"<<endl<<endl;
            getchar();
            gets(title);
            cout<<"ENter the author of the book"<<endl<<endl;
            getchar();
            gets(author);
            cout<<"ENter the price of the book:"<<endl<<endl;
            cin>>price;
            cout<<"Enter the number of copies available:"<<endl<<endl;
            cin>>stock;
            cout<<"Enter the publisher of the book:"<<endl<<endl;
            getchar();
            gets(publisher);
        }
        void display()
        {
            cout<<"\n\nThe details of the books are:"<<endl<<endl;
            cout<<"Title of book:-"<<title<<endl<<endl;
            cout<<"Author of book:-"<<author<<endl<<endl;
            cout<<"Price of book:-"<<price<<endl<<endl;
            cout<<"Copies of book available:-"<<stock<<endl<<endl;
            cout<<"Publisher of book:-"<<publisher<<endl<<endl;
        }
};
int main()
{
    Books b1[100];
    char author[100];
    char title[100];
    int n,m;
    cout<<"Enter the number of books:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\n\nFor "<<i<<" book"<<endl<<endl;
        b1[i].getdata();
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"\n\nFor "<<i<<" book"<<endl<<endl;
        b1[i].display();
    }
    cout<<"Enter the title of book:";
    gets(title);
    cout<<"Enter the author of the book:";
    gets(author);
    for(int i=1;i<=n;i++)
    {
        if((b1[i].compare_author(author)) && (b1[i].compare_title(title)))
        {
            cout<<"\n\nBook found of author name"<<author<<"and title"<<title<<endl<<endl;
            b1[i].display();
            cout<<"\n\nEnter the number of copies:";
            cin>>m;
            b1[i].compare_copies(m);
            break;
        }
        else
        {
            cout<<"\n\nBook not found!!\n\n";
            break;
        }
    }
}