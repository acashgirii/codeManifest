#include<iostream>
using namespace std;

int AP(int x)
{
    int y=3*x+7;//given arithmetic progression
    cout<<y<<endl;

    return y;
}

int main()
{
    int n;
    cin>>n;

    AP(n);
    return 0;
}