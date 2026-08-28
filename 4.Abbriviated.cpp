#include<iostream>
#include<string>
using namespace std;
int main()
{
    string fname,mname,lname;

    cout<<"Enter your name(first middle last):\n";
    cin>>fname>>mname>>lname;

    cout<<"Abbriviated name is: ";
    cout<<fname[0]<<"."<<mname[0]<<" "<<lname<<endl;
    return 0;
}