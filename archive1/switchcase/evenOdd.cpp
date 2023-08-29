#include<iostream>
using namespace std;

bool isEven(int x)
{
    if(x%2==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;

    bool flag=isEven(n);
    if(flag==1)
    {
        cout<<"Even Number"<<endl;
    }
    else
    {
        cout<<"Odd Number"<<endl;
    }

}