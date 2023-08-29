#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int x=0;

    for(int i=1; i<=min(m,n);i++)
    {
        if((m%i)==0 && (n%i)==0)
        {
            x=i;
        }
    }
    cout<<x<<endl;
}