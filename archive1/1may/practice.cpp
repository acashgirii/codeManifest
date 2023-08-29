#include<iostream>
using namespace std;

int upperpat(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int l=n-i;l>=1;l--)
        {
            cout<<" ";
        }
        for(int l=n-i;l>=1;l--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int lowerpart(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=i-1;j>=1;j--)
        {
            cout<<"*";
        }
        for(int l=i-1;l<n;l++)
        {
            cout<<" ";
        }
        for(int l=i-1;l<n;l++)
        {
            cout<<" ";
        }
        for(int j=i-1;j>=1;j--)
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

    upperpat(n);
    lowerpart(n);
}