#include<iostream>
#include<string.h>
using namespace std;
class books
{
    public:
    int book_id;
    int book_price;
    string book_name;
    string book_author;
    friend int same(books s[100]);
};
int same(books s[100])
{
    int n,price;
    cout<<"\n\nPlease Enter the number of books once again:"<<endl;
    cin>>n;
    cout<<"\nEnter the price you want to search"<<endl;
    cin>>price;
    for(int i=0;i<n;i++)
    {
        if(price==s[i].book_price)
        {
            cout<<"\n\nThe details of the books are:\n\n";
            cout<<"\nName:"<<s[i].book_name;
            cout<<"\nBook Price:"<<s[i].book_price;
            cout<<"\nBook author:"<<s[i].book_author;
            cout<<"\nEnter the Book ID:"<<s[i].book_id;
            cout<<"\nBook price:"<<s[i].book_price;
        }   
    }
    return 0;
}
int main()
{
    int n;
    books b1[100];
    cout<<"ENter the number of books:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"For "<<i+1<<" book"<<endl;
        cout<<"Enter the book id:";
        cin>>b1[i].book_id;
        cout<<"Enter the book name:";
        cin>>b1[i].book_name;
        cout<<"Enter the book author:";
        cin>>b1[i].book_author;
        cout<<"Enter the book price:";
        cin>>b1[i].book_price;
        cout<<"\n\n";
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n\nThe details of the books are:\n\n";
        cout<<"\nName:"<<b1[i].book_name;
        cout<<"\nBook Price:"<<b1[i].book_price;
        cout<<"\nBook author:"<<b1[i].book_author;
        cout<<"\nEnter the Book ID:"<<b1[i].book_id;
        cout<<"\nBook price:"<<b1[i].book_price;
    }
    same(b1);
    return 0; 

}