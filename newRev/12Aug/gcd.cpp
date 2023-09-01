#include<iostream>
using namespace std;

int min(int a, int b)
{
    int min;
    if(a<b)
    {
        min=a;
    }
    else if(b<a)
    {
        min=b;
    }
    else
    {
        min=0;
    }

}
int gcd(int a, int b)
{
    int gcd=1;
    for(int i=2; i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
        break;
    }
    cout<<gcd;
}

int main()
{
    int a,b;
    cin>>a>>b;

    min(a,b);
    gcd(a,b);
}