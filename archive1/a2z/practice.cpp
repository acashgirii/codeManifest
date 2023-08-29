#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the number of rows: ";
    cin>>m;
    //char x = 'A';
    //int c = int(x);
    int x=1;
    for(int i=1; i<=m;i++)
    {
        
        for(int j=1; j<=i;j++)
        {
            cout<<x<<" ";
            x=x+1;
        }
        cout<<endl;
    }

    
}