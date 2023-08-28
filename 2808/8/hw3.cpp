//Fibonachi Series using functions.
#include<iostream>
using namespace std;

void Fib(int n)
{
    cout<<0<<endl;
    cout<<1<<endl;
    int a=0,b=1, sum;
    for(int i=0;i<n-2;i++)
    {
        sum =a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }
}

int main()
{
    int n;
    cin>>n;

    Fib(n);
}