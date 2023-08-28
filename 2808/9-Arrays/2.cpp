//Sum of the elements in an array.
#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout<<"The following is the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sumFinder(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"The following is the sum of all elements: "<<sum<<endl;
}
int filler(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index: "<<i<<endl;
        cin>>arr[i];
    }
    printArray(arr,n);
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    filler(arr,n);
    sumFinder(arr,n);
}