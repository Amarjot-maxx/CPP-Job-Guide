#include<iostream>
using namespace std;
int main()
{
    float principle, time, intrest, SI;
    cout<<"________SIMPLE INTREST________\n";

    cout<<"Enter the Principle Amount: ";
    cin>>principle;

    cout<<"Enter the Time period(in years): ";
    cin>>time;

    cout<<"Enter the Intrest rate: ";
    cin>>intrest;

    SI = (principle * intrest * time)/100.0;
    cout<<"The Simple intrest on "<<principle<<" for "<<time<<" years on "<<intrest<<"%"<<" intrest rate is "<<SI<<endl;

    return 0;
}