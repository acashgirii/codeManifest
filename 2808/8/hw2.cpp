//Total number of set bits in 2 input integers.
#include<iostream>
using namespace std;

int setBit(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int x=setBit(a);
    int y=setBit(b);
    
    int z=x+y;
    cout<<z<<endl;
}