#include<iostream>
using namespace std;

int alphaTri(int n)
{
    for(int i=n;i>=0;i--)
    {
        char st=65;
        for(int j=i;j>0;j--)
        {
            cout<<st<<" ";
            st=st+1;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    alphaTri(n);
}