#include<iostream>
using namespace std;

void printCount(int x) //void doesn't return anything
{
    for(int i=1; i<=x;i++)
    {
        cout<<i<<endl;
    }
    return ;
}

int main()
{
    int n;
    cin>>n;

    printCount(n);
    return 0;
}