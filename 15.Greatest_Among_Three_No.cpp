#include<iostream>
using namespace std;

int main ()
{
    float a,b,c;
    cout<<"Enter three numbers to check for greatest: ";
    cin>>a>>b>>c;
    if (a > b){
        if (a > c)
            cout<<a<<" is greatest amoung the three";
        else
            cout<<c<<" is greatest amoung the three";
    }
    else if (b>a){
        if (b>c)
            cout<<b<<" is the greatest amoung the three";
        else
            cout<<c<<" is the greatest amoung the three";
    return 0;
    }
}