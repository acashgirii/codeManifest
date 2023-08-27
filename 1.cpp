#include<iostream> 
using namespace std;


int main()
{
    int a;
    cin>>a;

    while(1)
    {
        switch(a)
        {
            case 0:
                cout<<"Hello";
                break;
            case 1:
                cout<<"World";
                break;
            case 3:
                cout<<"Giri";
                break;
        }
        cout<<"Skycorp will become a reality"<<endl;
        exit(0);
    }

    cout<<a*50;
}