/*
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/

#include<iostream>
using namespace std;

int alphaTri(int n)
{
    for(int i=1;i<n+1;i++)
    {
        char st = 64;
        for(int l=n-i;l>0;l--)
        {
            cout<<" "<<" ";
        }
        for(int j=0;j<i;j++)
        {
            st++;
            cout<<st<<" ";
        }
        for(int k=1;k<i;k++)
        {   
            st--;
            cout<<st<<" ";
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