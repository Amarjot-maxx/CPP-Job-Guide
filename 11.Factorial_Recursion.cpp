#include<iostream>
using namespace std;

int fact(int a);

int main()
{
    int a;
    cout<<"Enter the number to find Factorial of: ";
    cin>>a;
    unsigned long long factorial = fact(a);
    cout<<"The Factorial of "<<a<<" is "<<factorial<<endl;
    return 0;
}
int fact(int a)
{
    if (a == 0)
        return 1;
    return a * fact(a -1);
}