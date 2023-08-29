#include<iostream>
using namespace std;

void inArray(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element @index value: "<<i<<endl;
        cin>>a[i];
    }
    cout<<endl;
}

void printArray(int a[], int size)
{
    cout<<"The following is the given array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void findDuplicate(int a[], int size)
{
    int ans=0;
    int x;
    for(int i=0;i<size;i++)
    {
        ans=ans^a[i];
    }
    for(int i=0; i<size;i++)
    {
        ans=ans^i;
    }
    cout<<"The duplicate element is: "<<ans<<endl;

}

int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;

    int a[100];

    inArray(a,n);
    printArray(a,n);
    findDuplicate(a,n);
}