#include<iostream>
using namespace std;

int first0cc(int a[], int size, int k)
{
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int a[], int size, int k)
{
    int s=0;
    int e=size-1;
    int ans=-1;

    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}

void printArr(int a[], int n)
{
    cout<<"The following is the input array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n, k;
    int a[1000];

    cout<<"Enter the array size: "<<endl;
    cin>>n;

    for(int i=0; i<n;i++)
    {
        cout<<"Enter the value of element at index "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);

    cout<<"Enter the element whose first and last occurence is to be checked: "<<endl;
    cin>>k;

    int firstI = first0cc(a,n,k);
    cout<<firstI<<endl;

    int lastI = lastOcc(a,n,k);
    cout<<lastI<<endl;

    return 0;
}
