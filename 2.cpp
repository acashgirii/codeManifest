#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    switch(0)
    {
        case 0:
            cout<<"Number of 100 Rs. Notes: "<<n/100<<endl;
            n=n%100;
        case 1:
            cout<<"Number of 50 Rs. Notes: "<<n/50<<endl;
            n=n%50;
        case 2:
            cout<<"Number of 20 Rs. Notes: "<<n/20<<endl;
            n=n%20;
        case 3:
            cout<<"Number of 1 Rs. Notes: "<<n<<endl;
    }
}