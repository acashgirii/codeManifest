#include<iostream>
using namespace std;

int firstTri(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int l=i;l>0;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    firstTri(n);
}