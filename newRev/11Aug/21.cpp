/*
**********
*        *
*        *
*        *
*        *
*        *
*        *
*        *
*        *
**********
*/

#include<iostream>
using namespace std;

int quad(int n)
{
    int i=1;
    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int j=0; j<n-2;j++)
    {
        cout<<"*";
        for(int k=0;k<n-2;k++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
}

int main()
{
    int n;
    cin>>n;

    quad(n);
}