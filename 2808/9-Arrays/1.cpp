//Maximum/Minimum in an array
#include<iostream>
using namespace std;

int printArray(int a[], int size)
{
    cout<<"The following is the index: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int minimum(int a[], int size)
{
    int min=INT16_MAX;
    for(int i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"Minimum element is: "<<min<<endl;
}

int maximum(int a[], int size)
{
    int max=INT16_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum element is: "<<max<<endl;
}

int input(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at index "<<i<<endl;
        cin>>a[i];
    }
    cout<<endl;
}

int main()
{
    int arr[10];
    input(arr,10);
    printArray(arr,10);
    minimum(arr,10);
    maximum(arr,10);
}