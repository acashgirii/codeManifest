#include<iostream>
using namespace std;

int binSearch(int a[], int n, int k)
{
    int s=0;
    int e=n-1;
    int ans=0;
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
        else if(a[mid]<k)
        {
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    return -1;
}

void printArr(int a[], int n)
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
    int a[1000];

    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0; i<n;i++)
    {
        cout<<"Enter the value of the element at the index: "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);

    cout<<"Enter the key: "<<endl;
    cin>>k;

    int index=binSearch(a,n,k);
    cout<<index<<endl;

    return 0;
}

