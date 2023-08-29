#include<iostream>
using namespace std;

int max(int arr[], int size)
{
    int x= INT32_MIN;
    for(int i=0;i<size;i++)
    {
        if(x<arr[i])
        {
            x=arr[i];
        }
    }
    cout<<"Maximum value is "<<x<<endl;
    return x;
}
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
    cout<<"Minimum value is "<<x<<endl;
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

    max(a, size);
    min(a,size);
}