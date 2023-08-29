#include<iostream>
using namespace std;

int pikesPeak(int a[], int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(a[mid]<a[mid+1])
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

int main()
{
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int index = pikesPeak(a,n);
    cout<<a[index];
    return 0;
}