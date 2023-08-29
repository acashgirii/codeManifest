#include<iostream>
using namespace std;

int binSearch(int a[], int size, int key)
{
    int start =0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(key==a[mid])
        {
            return mid;
        }
        if(key<a[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}

int printArr(int a[], int n)
{
    cout<<"The following is the input array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int binSearchParityCheck(int n)
{
    if(n==-1)
    {
        cout<<"The element is not found in the array"<<endl;
    }
    else
    {
        cout<<"The elemnt is found in the array at index "<<n<<endl;
    }
    cout<<endl;
}

int main()
{
    int a[100];
    int n, k;

    cout<<"Enter the size of the sorted array: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element value at index "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);

    cout<<"Enter the key element to be searched using Binary Search"<<endl;
    cin>>k;

    int index = binSearch(a,n,k);
    binSearchParityCheck(index);

    return 0;
}