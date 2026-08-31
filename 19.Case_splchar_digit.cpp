#include<iostream>
using namespace std;

int main()
{
    char chr;
    cout<<"Enter any Character: ";
    cin>>chr;

    if (chr>='a' && chr<='z')  
        cout<<"The entered character is a LowerCase Alphabet!!\n";
    else if (chr>='A' && chr<='Z')
        cout<<"The entered character is a UpperCase Alphabet!!\n";
    else if (chr>='0' && chr<='9')
        cout<<"The entered character is a Digit!!\n";
    else
        cout<<"The entered character is a Special Character!!\n";
    return 0;
}