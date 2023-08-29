#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return ;
}

int main()
{
    int n;
    cin>>n;
    int number[n]={1};
    for(int i=0;i<n;i++) 
    {
        number[i]=1; //this puts the value of 1 in every element of the array
    }
    printArray(number, n);
    cout<<endl;
    int sizeArr = sizeof(number)/sizeof(int);
    cout<<sizeArr<<endl;
}