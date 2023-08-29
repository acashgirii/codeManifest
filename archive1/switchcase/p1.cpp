#include<iostream>
using namespace std;

int update(int a)
{
    a=a*a;
    cout<<a<<endl;
    return a;
}

int main()
{
    int a=14;
    update(a);
    cout<<a<<endl;
}