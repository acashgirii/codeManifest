#include<iostream>
using namespace std;

int main()
{
    int arr[100]={4,0,2,-5,-4};
    int a=0;

    for(int i=0;i<10;i++)
    {
        a=a^arr[i];
    }
    cout<<a;
}
