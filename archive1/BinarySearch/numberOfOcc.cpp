#include<iostream>
using namespace std;

int firstOcc(int a[], int n, int k)
{
    int s=0;
    int e=n-1;
    int x=-1;

    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(a[mid]==k)
        {
            x=mid;
            e=mid-1;
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
    return x;
}

int lastOcc(int a[], int n, int k)
{
    int s=0;
    int e=n-1;
    int x=-1;

    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(a[mid]==k)
        {
            x=mid;
            s=mid+1;
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
    return x;
}

int numOcc(int a, int b)
{
    int num=b-a+1;
    cout<<"The number of occurences is: "<<num<<endl;
    return 0;
}

int printArr(int a[], int n)
{
    cout<<"The following is the input array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,k;
    int a[1000];

    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number at the index value: "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);

    cout<<"Enter the element whose occurence is to be checked: "<<endl;
    cin>>k;

    int x=firstOcc(a,n,k);
    cout<<x<<endl;

    int y=lastOcc(a,n,k);
    cout<<y<<endl;
    
    numOcc(x,y);

    return 0;
}