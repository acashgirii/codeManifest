#include<iostream>
using namespace std;

int printArr(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int dupl(int a[], int n)
{
    int i=0;
    while(i+1<n)
    {
        int x=0;
        x=a[i];
        a[i]=a[i+1];
        a[i+1]=x;
        i+=2;
    }
}
int main()
{
    int n;
    int a[1000];
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index "<<i<<endl;
        cin>>a[i];
    }
    cout<<endl;
    printArr(a,n);
    dupl(a,n);
    printArr(a,n);
}