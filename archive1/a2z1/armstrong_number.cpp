#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int y=n;//initialising a variable to store input val of n for getting sum of digits
    int z=n;//string initial value of input n for checking the sum with it to observe whether Armstrong or not
    
    int i=0;//initial count of number of digits in n
    
    float x=0;//use float as data type for exponents
    int sum=0;
    
    while(n!=0)//This loop calculates the number of digits in 'n'
    {
        n=n/10;
        i++;
    }
    
    while(y!=0)//This will calculate the sum of the digits raised to the power of number of digits
    {
        float x=pow((y%10),i);//calcultaing the exponent
        sum=sum+x;//sum
        y=y/10;//moves to the next digit
    }
    
    if(sum==z)//if the sum is eqal to the starting input number, it is Armstrong
    {
        cout<<"Armstrong Number"<<endl;
    }
    
    else//otherwise, not an Armstrong number
    {
        cout<<"Not an Armstrong Number"<<endl;
    }
}