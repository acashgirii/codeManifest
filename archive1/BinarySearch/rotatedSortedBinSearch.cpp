#include<iostream>
using namespace std;

int pivot(int a[], int n)
{
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;

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

bool pivSearch(int a[], int n, int mid, int k)
{
    bool flag = false;
    if(a[mid]<=k && a[n-1]>=k)
    {
        flag=true;
    }
    else
    {
        flag=false;
    }
    return flag;
}

int binSearch(int a[],int s, int e, int k)
{
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(a[mid]==k)
        {
            return mid;
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

    return mid;
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

int systemStr(int flag, int a[], int mid, int n, int k)
{
    if(flag == true)
    {
        return binSearch(a,mid,n-1,k);
    }
    else
    {
        return binSearch(a,0,mid-1,k);
    }
}
int main()
{
    int n, a[1000];

    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of the element at index "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);

    int k;
    cout<<"Enter the element ot be searched: "<<endl;
    cin>>k;

    int x = pivot(a,n);
    //cout<<x<<endl;
    bool y = pivSearch(a,n,x,k);
    //cout<<y<<endl;
    int z = systemStr(y,a,x,n,k);
    cout<<"The element is found at index: "<<z<<endl;

    return 0;
}