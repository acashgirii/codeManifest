#include<iostream>
using namespace std;

int reverser(int n)
{
    int y=n;
    int num=0;

    while(n>0)
    {
        num=num*10+n%10;
        n=n/10;
    }
}

int main()
{
    int n;
    cin>>n;

    reverser(n);
}