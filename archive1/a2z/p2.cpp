#include<iostream>
using namespace std;

int main()
{
    int m;
    cin>>m;

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k=m; k>=1;k--)
    {
        for(int l=k; l>=1;l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

