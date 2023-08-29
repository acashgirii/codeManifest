#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int ans;
    for(int i=1; i<=min(m,n);i++)
    {
        if(m%i==0 && n%i==0)
        {
            ans=i;
        }
    }

    cout<<ans<<endl;
}