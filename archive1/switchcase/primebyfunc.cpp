#include<iostream>
using namespace std;

bool checkPrime(int x)
{
    for(int i=2;i<x;i++)
    {
        int y = x%2;

        if(y==0)
        {
            return true;
            break;
        }
        return false;
    }
}

int main()
{
    int n;
    cin>>n;

    if(checkPrime(n)==1)
    {
        cout<<"Composite Number"<<endl;
    }
    else
    {
        cout<<"Prime Number"<<endl;
    }
    return 0;
}