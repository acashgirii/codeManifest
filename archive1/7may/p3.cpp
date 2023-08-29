#include<iostream>
using namespace std;

int min(int arr[], int size)
{
    int x= INT32_MAX;
    for(int i=0;i<size;i++)
    {
        if(x>arr[i])
        {
            x=arr[i];
        }
    }
    return x;
}

int max(int arr[], int size, int z)
{
    int x= INT32_MIN;
    for(int i=z;i<size;i++)
    {
        if(x<arr[i])
        {
            x=arr[i];
        }
    }
    return x;
}

int main()
{
    int size;
    cout<<"Enter the array size"<<endl;
    cin>>size;
    int a[100];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter value @index "<<i<<endl;
        cin>>a[i];
    }
    cout<<"The following is the array: "<<endl;

    for(int j=0;j<size;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;

    int x= min(a,size);
    cout<<x<<endl;
    int y= max(a,size,x);
    cout<<y<<endl;

    int profit=0;

    if(x!=a[size-1])
    {
        profit = y-x;
    }
    else
    {
        profit=0;
    }
    cout<<profit<<endl;
}