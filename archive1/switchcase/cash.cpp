#include<iostream>
using namespace std;
//uses greedy strategy
int main()
{
    int n;
    cout<<"Enter the value of USD: "<<endl;
    cin>>n;
    int x;
    cin>>x;
    int i=n-(n/100)*100;
    int j=i-(i/50)*50;
    int k=j-(j/20)*20;

    switch(x)
    {
        case 1: cout<<"The number of $100 bills: "<<n/100<<endl;

        case 2: cout<<"The number of $50 bills: "<<i/50<<endl;
    
        case 3: cout<<"The number of $20 bills: "<<j/20<<endl;

        case 4: cout<<"The number of $1 bills: "<<k<<endl;
                    break;
    }
}