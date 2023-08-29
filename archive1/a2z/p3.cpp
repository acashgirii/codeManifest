#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    //char x='A';
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int y=x+i+j-2;
            cout<<y<<" ";

            
        }
        cout<<endl;
    }
}