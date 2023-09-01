#include<iostream>
using namespace std;

int upTri(int n)
{

    for(int i=1;i<=n-1;i++)
    {
        for(int l=n-i;l>0;l--)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int downTri(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i-1;j++)
        {
            cout<<" ";
        }
        for(int k=n-i+1;k>0;k--)
        {
            cout<<"*";
        }
        for(int l=n-i;l>0;l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    upTri(n);
    downTri(n);
}