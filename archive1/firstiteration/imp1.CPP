#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of rows"<<endl;
    int n;
    cin>>n;

    
    for(int i=1; i<=n;i++)
    {
        int count =i;
        for(int j=1; j<=i; j++)
        {
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}

/*
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter a number: " << endl;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        // int value = i;
        while (j <= i)
        {
            cout << " " << i + j - 1<< " ";
            // value += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}


*/