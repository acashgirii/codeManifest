#include<iostream>
using namespace std;

int first0cc(int a[], int n, int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans=mid;
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
    return ans;
}

int lastOcc(int a[], int n, int k)
{
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans=mid;
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
    return ans;
}

int numOcc(int x, int y)
{
    int num = y-x+1;
    return num;
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

    cout<<"Enter the number whose occurences is to be found: "<<endl;
    cin>>k;
    int x = first0cc(a,n,k);
    int y=lastOcc(a,n,k);

    int z=numOcc(x,y);

    cout<<x<<" "<<y<<" "<<z<<endl;

    return 0;
}
