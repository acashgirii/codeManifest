#include<iostream>
using namespace std;

int pivot(int a[], int n)
{
    int s=0;
    int e = n-1;
    int mid=s+(e-s)/2;
 
    while(s<e)
    {
        if(a[mid]<=a[n-1])
        {
            e=mid-1;
        }
        else
        {
            s=mid;
        }

        mid=s+(e-s)/2;
    }

    return mid;
}

int main()
{
    int n;
    int a[100];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int nidex = pivot(a,n);
    cout<<a[nidex]<<endl;
}