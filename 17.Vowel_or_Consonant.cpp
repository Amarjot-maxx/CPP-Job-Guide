#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the character to check for Vowel or Consonant: ";
    cin>>c;
    c = tolower(c);
    if (c == 'a'||c=='e'||c=='i'||c=='o'||c=='u')
        cout<<"The entered character is a Vowel."<<endl;
    else
        cout<<"The entered character is a Consonant."<<endl;
    return 0;
}