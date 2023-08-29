#include<iostream>
using namespace std;

int peak(int a[], int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(a[mid]<=a[n-1])
        {
            e=mid;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int printArr(int a[], int n)
{
    cout<<"The following is the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,k, a[1000];
    cout<<"Enter the array size: "<<endl;
    cin>>n;

    for(int i=0; i<n;i++)
    {
        cout<<"Enter the element at the index value: "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);
    int peaks = peak(a,n);
    cout<<a[peaks]<<endl;
}