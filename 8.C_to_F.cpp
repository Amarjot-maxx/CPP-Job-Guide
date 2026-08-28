#include<iostream>
using namespace std;

void celcius_to_F(float c)
{
    cout<<"Celcius to Fahrenheit for "<<c<<"˚C is "<<(c * 9/5) + 32<<"˚F\n";
}
void fahrenheit_to_C(float f)
{
    cout<<"Fahrenheit to Celcius for "<<f<<"˚F is "<<(f - 32) * 5/9<<"˚C\n";
}
int main()
{
    int a;
    float temp;
    cout<<"Enter the Operation to perform\n\t1.Celcius to Fahrenheit\n\t2.Fahrenheit to Celcius\n";
    cin>>a;

    if (a==1){
        cout<<"Enter the temperature Celcius: ";
        cin>>temp;
        celcius_to_F(temp);
    }
    else if(a==2){
        cout<<"Enter the temperature Fahrenheit: ";
        cin>>temp;
        fahrenheit_to_C(temp);
    }
    else
        cout<<"Entered input in Invaid(choose 1 or 2)!!";
    return 0;
}