/*
*
**
***
****
*****
****
***
**
*
*/

#include<iostream>
using namespace std;

int upTri(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int downTri(int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-i-1;j>0;j--)
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