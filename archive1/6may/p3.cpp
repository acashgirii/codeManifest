#include<iostream>
using namespace std;

int pivot(int a[], int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }

    return mid;
}

bool whichPart(int a[], int n, int mid, int k)
{
    bool flag =0;
    if(k>=a[mid] && k<=a[n-1])
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    return flag;
}

int binSearch(int a[], int s, int e, int k)
{
    int m =s+(e-s)/2;
    while(s<=e)
    {
        if(k==a[m])
        {
            return m;
        }
        else if(k<a[m])
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return m;    
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

int sysStr(int x, int a[], int mid, int n, int k)
{
    if(x==1)
    {
        int y = binSearch(a,mid,n-1,k);
    }
    else
    {
        int y = binSearch(a,0,mid-1,k);
    }
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
    
    cout<<"Enter the element to be searched: "<<endl;
    cin>>k;
    
    int piv = pivot(a,n);
    int x = whichPart(a,n,piv,k);
    
    int y = sysStr(x,a,piv,n,k);
    cout<<y<<endl;
}
