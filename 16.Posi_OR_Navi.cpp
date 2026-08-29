#include<iostream>
using namespace std;

int main()
{
    int num1;
    cout<<"Enter the number to check for nature: ";
    cin>>num1;
    cout<<"The entered number is " << (num1 > 0 ? "Positive" : "Negative");
    return 0;
}