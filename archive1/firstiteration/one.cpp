#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the Character"<<endl;
    char ch;
    cin>>ch;
    int x = int(ch);

    if(x>=48 && x<=57)
    {
        cout<<"the character is a numeric"<<endl;
    }
    else if(x>=65 && x<=90)
    {
        cout<<"the character is an upper case alphabet"<<endl;
    }
    else if(x>=97 && x<=122)
    {
        cout<<"the character is a lower case alphapet"<<endl;
    }
    else
    {
        cout<<"the character entered is not logged into the archive"<<endl;
    }
}