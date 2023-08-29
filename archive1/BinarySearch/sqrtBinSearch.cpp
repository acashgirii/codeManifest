#include<iostream>
using namespace std;

int sqrtbin(int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;

    if(n==1)
    {
        return 1;
    }
    
    while(s<=e)
    {
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid>n)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double presicion(int n, int x, int count)
{
    double ans=x;
    double factor =1;
    for(int i=0; i<count;i++)
    {
        factor=factor/10;
        for(double j=ans; j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number whose sqrt is to be found: "<<endl;
    cin>>n;
    int count;
    cout<<"Enter the digits of precision of square root: "<<endl;
    cin>>count;
    int x = sqrtbin(n);
    double y=presicion(n,x,count);
    cout<<y<<endl;
}