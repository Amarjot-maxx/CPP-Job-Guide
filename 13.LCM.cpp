#include<iostream>

using namespace std;

int main()
{
    int a, b, lcm;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    //checking of positive 
    if (a<0 || b<0) {
        cout<<"Please enter positive numeber";
        return 0;
    }
    if (a>b)
        lcm = a;
    else;
        lcm = b;
    
    while(true)
    {
       if (lcm % a == 0 && lcm % b == 0)
       {
        cout<<"LCM = "<<lcm<<endl;
        break;
       }
    lcm ++;
    }
    return 0;
}