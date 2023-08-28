//nth term of a given A.P.
#include<iostream>
using namespace std;

int nth_Term(int n)
{
    int x = 3*n+7;
    return x;
}

int main()
{
    int n;
    cin>>n;

    cout<<nth_Term(n);
}