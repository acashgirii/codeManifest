#include<iostream>
using namespace std;

void moveZeros(int a[], int n)
{
    int ind=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[ind]=a[i];
            ind++;
        }
    }
    while(ind<n)
    {
        a[ind]=0;
        ind++;
    }
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
    int n, a[1000];

    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value at the index "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);
    
    printArr(a,n);

    moveZeros(a,n);

    printArr(a,n);

    return 0;
}