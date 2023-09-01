#include<iostream>
using namespace std;

int alphaTri(int n)
{
    char st = 65;
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<st<<" ";
        }
        st=st+1;
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    alphaTri(n);
}