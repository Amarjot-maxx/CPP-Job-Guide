#include<iostream>
#include<cmath> //cmath library for (pow()) power function 
using namespace std;

//fuction function pow() function
long long pow_function(float base, float expo);
//function from loop
long long pow_loop(float base, float expo);

int main()
{

    float base, power;
    cout<<"Enter the base and power: ";
    cin>>base>>power;


    //Through pow()
    long long result = pow_function(base, power);
    //through loop
    long long result1 = pow_loop(base, power);
    cout<<"The solution of "<<base<<"^"<<power<<" through pow() function is "<<result<<endl;
    cout<<"The solution of "<<base<<"^"<<power<<" through loop is "<<result<<endl;
    return 0;
}

//pow_function
long long pow_function(float base, float expo)
{
    return pow(base, expo);
}

//while loop
long long pow_loop(float base, float expo)
{
    long long result =1;
    while(expo>0)
    {
        result *= base;
        expo --;
    }
    return result;
}