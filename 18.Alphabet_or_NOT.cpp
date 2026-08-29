#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter the character to check for Alphabet: ";
    cin>>c;
    if (isalpha(c))
        cout<<"The Character entered is a ALPHABET!!\n";
    else
        cout<<"THe Character entered is not a alphabet\n";
    return 0;
}