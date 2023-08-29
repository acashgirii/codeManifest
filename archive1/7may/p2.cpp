#include<iostream>
using namespace std;

int summa(int a[], int n, int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

    void rotated(int nums[], int k, int n) {

        int ind=k;
        for(int i=0;i<k;i++)
        {
            nums[ind]=nums[i];
            ind++;
        }
        for(int ind=0;ind<k;ind++)
        {
            int i=k+1;
            nums[ind]=nums[i++];
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
    int n, a[1000],k;

    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value at the index "<<i<<endl;
        cin>>a[i];
    }

    printArr(a,n);

    cout<<"Enter the target sum: "<<endl;
    cin>>k;
    rotated(a,n,k);
    printArr(a,n);

    return 0;
}