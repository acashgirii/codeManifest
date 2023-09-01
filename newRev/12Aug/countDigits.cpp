#include<iostream>
using namespace std;

int counter(int n)
{
    int count=0;
    int x=n;

    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<"No. of digits in "<<x<<" is "<<count<<endl;
}

int main()
{
    int n;
    cin>>n;

    counter(n);
}