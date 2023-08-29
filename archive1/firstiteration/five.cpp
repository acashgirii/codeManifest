#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of rows: "<<endl;
    int n;
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        string k = " ";

        for(int j=1; j<=i; j++)
        {
            cout<<k<<" "<<"*";
        }
        cout<<endl;
    }
}