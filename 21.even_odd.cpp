#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number you want to check for Even or Odd: ";
    cin>>num;

    (num%2==0) ? cout<<"The entered num is Even!!\n": cout<<"The entered num is Odd!!\n";
    return 0;
}