#include<iostream>
using namespace std;

int pikesPeak(int a[], int n)
{
    int s=0;
    int e=n-1;
    int x;
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

    return s;
}

int printArr(int a[], int n)
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
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;

    int a[100];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of the element at index "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);

    int index = pikesPeak(a,n);
    cout<<"The peak of the given input array is: "<<a[index]<<endl;
    return 0;
}