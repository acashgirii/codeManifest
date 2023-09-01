/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

#include<iostream>
using namespace std;

int upPart(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i+1;j>0;j--)
        {
            cout<<"*";
        }
        for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=n-i+1;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int downPart(int n)
{
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int k=n-i;k>0;k--)
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

int main()
{
    int n;
    cin>>n;

    upPart(n);
    downPart(n);
}