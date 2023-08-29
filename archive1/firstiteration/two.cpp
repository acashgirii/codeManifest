#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the number till which grid is to be made: "<<endl;
    cin>>m;

    int i=1;
    int count=1;
    while(i<=m)
    {
        int j=1;
        while(j<=m)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    } 
}