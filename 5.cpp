#include<iostream>
using namespace std;

int factorial(int n)
{
    int prod=1;
    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }
    return prod;
}

int combi(int n, int r)
{
    int comb=factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)<<endl;
    cout<<combi(n,r)<<endl;
}