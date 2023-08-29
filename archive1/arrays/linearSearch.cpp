#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int x)
{
    bool flag= false;
    int y;
    for(int i=0;i<size;i++)
    {
        if(x==arr[i])
        {
            flag=true;
            y=i;
            break;
        }
        else
        {
            flag=false;
        }
    }
    if(flag==false)
    {
        cout<<"The element to be searched is not found in the given array"<<endl;
    }
    else
    {
        cout<<"The element "<<x<<" was found at index "<<y<<endl;
    }
    return x;
}

int min(int arr[], int size)
{
    int x=INT32_MAX;
    for(int i=0;i<size;i++)
    {
        if(x>arr[i])
        {
            x=arr[i];
        }
    }
    cout<<"Minimimum value of the array is: "<<x<<endl;
    return x;
}

int max(int arr[], int size)
{
    int x=INT32_MIN;
    for(int i=0;i<size;i++)
    {
        if(x<arr[i])
        {
            x=arr[i];
        }
    }
    cout<<"Maximum value of the array is: "<<x<<endl;
    return x;
}

int arraySum(int arr[], int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of the array is: "<<sum<<endl;
    return sum;
}

int reverseArray(int arr[], int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 1;
}

int main()
{
    int n;
    cout<<"The size of the array: "<<endl;
    cin>>n;

    int a[100];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index "<<i<<endl;;
        cin>>a[i];
    }
    cout<<endl;
    cout<<"The following is the array hence made"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;

    linearSearch(a,n,x);
    min(a,n);
    max(a,n);
    arraySum(a,n);
    reverseArray(a,n);

    return 0;
}