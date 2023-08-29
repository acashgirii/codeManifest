#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;

    int i =2;
    while(i<n)
    {
        if(n%i == 0)
        {
            cout<<"Composite Number for "<< i<<endl;
        }
        else{
            cout<<"Prime Number for "<< i<<endl;
        }
        i=i+1;
    }

}