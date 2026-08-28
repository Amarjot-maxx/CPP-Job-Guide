#include<iostream>
using namespace std;

int main()
{
    int num1, num2, gcd;
    cout<<"Enter two numbers for GCD: ";
    cin>>num1>>num2;
    
    while(num2 != 0)
    {
        int reminder = num1 % num2;
        num1 = num2;
        num2 = reminder;
    }
    gcd = num1;
    cout<<"The GCD = "<<gcd<<endl;
    return 0;
}