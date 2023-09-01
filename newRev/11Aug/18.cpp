/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/

#include<iostream>
using namespace std;

int alphaTri(int n)
{
    char st=65+n;
    for(int i=0;i<n+1;i++)
    {   
        st=st-i;
        for(int j=0;j<i;j++)
        {
            cout<<st<<" ";
            st++;
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