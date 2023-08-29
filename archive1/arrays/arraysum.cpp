#include<iostream>
using namespace std;

int arraySum(int arr[], int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of the array is "<<sum<<endl;
}

int main()
{
    int a[100];
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value @index "<<i<<endl;
        cin>>a[i];
    }

    cout<<"The following is the required array: "<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
    
    arraySum(a,n);
    return 0;
}