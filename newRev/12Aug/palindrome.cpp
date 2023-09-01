#include<iostream>
using namespace std;

int checker(int n)
{
    int y=n;
    int num=0;
    while(n>0)
    {
        num=num*10+n%10;
        n=n/10;
    }
    if(num==y)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    checker(n);
}