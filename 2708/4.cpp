#include<iostream>
using namespace std;

int oddEven(int n)
{
    int x=n&1;
    switch(x)
    {
        case 0:
            cout<<"Even"<<endl;
            break;
        case 1:
            cout<<"Odd"<<endl;
            break;
    }
    return x;
}
int main()
{
    int x;
    cin>>x;
    oddEven(x);
}