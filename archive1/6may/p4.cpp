#include<iostream>
using namespace std;

int binSqrt(int n)
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
        else if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePre(int n, int mid, int count)
{
    double x = mid;
    double factor=1;
    for(int i=0; i<count; i++)
    {
        factor = factor/10;
        for(double j= x; j*j<n; j=j+factor)
        {
            x=j;
        }
    }
    return x;
}

int main()
{
    int n, count;
    cout<<"Enter the number whose square root is to be found: "<<endl;
    cin>>n;
    cout<<"Enter the precision: "<<endl;
    cin>>count;
    int x = binSqrt(n);
    double y = morePre(n,x,count);

    cout<<y<<endl;
    return 0;
}