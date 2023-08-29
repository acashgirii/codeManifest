#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    if(ans==0)
    {
        cout<<"No unique value in the entire array"<<endl;
    }
    else
    {
        cout<<"The unique value in the array is: "<<ans<<endl;
    }
    return ans;
}

void inArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element @index value "<<i<<endl;
        cin>>arr[i];
    }
    cout<<endl;
}

void printArray(int arr[], int size)
{
    cout<<"The following is the array: "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the array size: "<<endl;
    cin>>n;
    int a[100];

    inArray(a,n);
    printArray(a,n);
    findUnique(a,n);
}