#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
        for(int i=1; i<=n; i++)
    {
         char a='A';

        for(int j=n-i; j>=1;j--)
        {
            cout<<" ";
        }
        for(int l=1; l<=i;l++)
        {
        
            cout<<a;
            a=a+1;
        }
        for(int k=i-1; k>=1; k--)
        {
           
            cout<<a;
            a=a+i-1;
        }
        for(int j=n-i; j>=1;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int x=n; x>=1;x--)
    {
          for(int j=n-x;j>=1;j--)
        {
            cout<<" ";
        }
        for(int i=1;i<=x;i++)
        {
            cout<<"*";
        }
         for(int l=x-1;l>=1;l--)
        {
            cout<<"*";
        }
          for(int j=n-x;j>=1;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
