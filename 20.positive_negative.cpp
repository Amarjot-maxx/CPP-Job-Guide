#include<iostream>

using namespace std;

int main()
{
    long long num;
    cout<<"Enter the number to check for Positive or Negative: ";
    cin>>num;

    if (num==0)
        cout<<"Entered number is Zero!!\n";
    else if (num>0)
        cout<<"Entered number is Positive!!\n";
    else
        cout<<"Entered number is Negative!!\n";
    return 0;
}