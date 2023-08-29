#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag = false;

    for(int i=2; i<n; i++)
    {
        int b = n%i;
        if(b==0)
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }
    if(flag==true)
    {
        cout<<"The number is composite"<<endl;
    }
    else
    {
        cout<<"The number is prime"<<endl;
    }
}