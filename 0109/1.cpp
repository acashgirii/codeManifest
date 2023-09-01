#include<iostream>
using namespace std;

int swapper(int arr[], int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int filler(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
    cout<<endl;
    printArray(arr,n);
}
int main()
{
    int n;
    int arr[100];

    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    filler(arr,n);
    swapper(arr,n);
    printArray(arr,n);
}
