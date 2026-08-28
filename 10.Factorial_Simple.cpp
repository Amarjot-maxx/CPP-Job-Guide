#include<iostream>
using namespace std;

int main()
{
    int num, fact, temp;
    fact = 1;
    cout<<"Enter the number to find FACTORIAL of: ";
    cin>>num;
    temp = num;
    while(temp >= 1)
    {
        fact *= temp;
        temp--;
    }
    cout<<"The factorial of "<<num<<" is "<<fact;
    return 0;
}
