#include<iostream>
using namespace std;

int firstOcc(int a[], int n, int k)
{
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;

    int x=0;

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
    int mid=s+(e-s)/2;
    int y=0;

    while(s<=e)
    {
        if(a[mid]==k)
        {
            y=mid;
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

    return y;
}

int numOcc(int x, int y)
{
    int numOcc = y-x+1;

    return numOcc;
}

int printArray(int a[], int n)
{
    cout<<"The following is the input array: "<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,k;
    int a[100];

    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of the array at index: "<<i<<endl;
        cin>>a[i]; 
    }

    printArray(a,n);

    cout<<"Enter the number whose first and last occurence is to be checked: "<<endl;
    cin>>k;

    int first=firstOcc(a,n,k);
    cout<<"The first occurence of the number is at index: "<<first<<endl;
    int last=lastOcc(a,n,k);
    cout<<"The last occurence of the number is at index: "<<last<<endl;

    cout<<"The following is the number of occurences of the given element "<<k<<" : "<<endl;
    int num=numOcc(first, last);
    cout<<num<<endl;

    return 0;
}