#include<iostream>
using namespace std;

int fact(int x)
{
    int ans=1;
    for(int i=1;i<=x;i++)
    {
        ans=ans*i;
    }
    return ans;
}

int nCr(int x, int y)
{
    int m = fact(x);
    int n = fact(y)*fact(x-y);

    cout<<m/n;
}

int main()
{
    int a,b;
    cin>>a>>b;

    nCr(a,b);
    return 0;   
}