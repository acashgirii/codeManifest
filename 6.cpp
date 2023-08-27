#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;

    int x=isPrime(n);
    switch(x)
    {
        case 1:
            cout<<"Prime"<<endl;
            break;
        case 0:
            cout<<"Composite"<<endl;
            break;
    }
}