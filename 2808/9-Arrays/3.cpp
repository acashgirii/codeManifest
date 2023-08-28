//Linear Search in array.
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    bool flag=0;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            index=i;
            break;
        }
    }
    return flag;
}
int indexer(int arr[], int n, int key)
{
    int index[100]={0};
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            index[x]=i;
            x++;
        }
    }
    return index[100];
}
void printArray(int arr[], int n)
{
    cout<<"Printing the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void fillArray(int arr[], int n)
{
    cout<<"Filling inputs in the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index: "<<i<<endl;
        cin>>arr[i];
    }
    cout<<endl;
    printArray(arr,n);
}
void checker(int arr[], int n, int key)
{
    bool flag= linearSearch(arr,n,key);
    int index= indexer(arr,n,key);
    switch(flag)
    {
        case 0: 
            cout<<"The element is not found in the array"<<endl;
            break;
        case 1:
            cout<<"The element is found in the array at "<<index<<endl;
            break;
    }
}
int main()
{
    int arr[100];
    int n,key;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    fillArray(arr,n);
    cout<<"Enter the key to be searched for in the array: "<<endl;
    cin>>key;
    checker(arr,n,key);
}