#include<iostream>
using namespace std;

int binSearch(int a[], int size, int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(a[mid]==key)
        {
            return mid;
        }

        if(key>a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[7]={2,5,6,7,8,10,24};

    //int index=binSearch(even,6,12);
    //cout<<"Index of key is "<<index<<endl;

    int index=binSearch(odd,7,10);
    cout<<"Index of key is "<<index<<endl;
}