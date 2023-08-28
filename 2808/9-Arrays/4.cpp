//Reversing an array.
#include<iostream>
using namespace std;

int reverser(int arr[], int n)
{
    int start=0;
    int end=n-1;
    int x;
    while(start<=end)
    {
        x=arr[start];
        arr[start]=arr[end];
        arr[end]=x;
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void fillArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index: "<<i<<endl;
        cin>>arr[i];
    }
    cout<<"The followin is the array: "<<endl;
    printArray(arr,n);
    cout<<endl;
}
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    fillArray(arr,n);
    reverser(arr,n);
}
