/*
1
01
101
0101
10101
*/

#include<iostream>
using namespace std;

int tri(int n)
{
    int count=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            count=1;
        }
        else
        {
            count=0;
        }
        for(int j=1;j<=i;j++)
        {
            cout<<count;
            count=1-count;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;

    tri(n);
}