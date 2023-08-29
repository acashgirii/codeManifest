#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlt(int arr[], int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"The swapped value of array is: "<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int a[100];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of element at index "<<i<<endl;
        cin>>a[i];
    }
    cout<<endl;
    cout<<"The given array is: "<<endl;
    printArray(a,n);
    cout<<endl;
    swapAlt(a,n);
    printArray(a,n);
    return 0;
}