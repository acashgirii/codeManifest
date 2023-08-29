#include<iostream>
using namespace std;

int fibo(int x)
{
    int a=0;
    int b=1;

    for(int i=1;i<=x-2;i++)
    {
        int sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    cout<<"0"<<endl;
    cout<<"1"<<endl;
    fibo(n);
}