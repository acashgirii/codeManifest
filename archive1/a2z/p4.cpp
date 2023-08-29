#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
        for(int i=1; i<=n; i++)
    {
         for(int l=1; l<=i;l++)
        {
            cout<<"*";
        }
        for(int j=n-i; j>=1;j--)
        {
            cout<<" ";
        }
        for(int j=n-i; j>=1;j--)
        {
            cout<<" ";
        }
        for(int k=i; k>=1; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int x=n-1; x>=1;x--)
    {
        for(int i=1;i<=x;i++)
        {
            cout<<"*";
        }
        for(int j=n-x;j>=1;j--)
        {
            cout<<" ";
        }
          for(int j=n-x;j>=1;j--)
        {
            cout<<" ";
        }
        for(int l=x;l>=1;l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
