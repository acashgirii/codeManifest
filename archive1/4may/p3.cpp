#include<iostream>
using namespace std;

void uniq(int arr[], int n)
{
    int a=0;
    for(int i=0;i<n;i++)
    {
        a=a^arr[i];
    }
    for(int i=1;i<n;i++)
    {
        a=a^i;
    }
    cout<<a<<endl;
}

void printA(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    printA(a,n);
    uniq(a,n);

}
