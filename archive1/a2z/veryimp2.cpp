#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n;i++)
    {
        char a='A';
        char b= 'C';
        for(int j=n-i; j>=1;j--)
        {
            cout<<" ";
        }
        for(int k=1; k<=i;k++)
        {
            cout<<a;
            a=a+1;
        }
        for(int m=i-1; m>=1;m--)
        {
            char b=a+m-i-1;
            cout<<b;
        }
        cout<<endl;
    }
}