#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of rows: "<<endl;
    int n;
    cin>>n;

     for(int i=1; i<=n; i++)
    {
        char b = 'A' + n - i;
        for(int j=1; j<=i; j++)
        {
            cout<<b<<" ";
            b=b+1;
        }
    
        cout<<endl;
    }
}
