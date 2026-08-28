#include<iostream>
#include<string>
using namespace std;
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    string stringType;

    cout<<"Size of Interger: "<<sizeof(intType)<<" Bytes"<<endl;
    cout<<"Size of Float: "<<sizeof(floatType)<<" Bytes"<<endl;
    cout<<"Size of Double: "<<sizeof(doubleType)<<" Bytes"<<endl;
    cout<<"Size of Character: "<<sizeof(charType)<<" Bytes"<<endl;
    cout<<"Size of String: "<<sizeof(stringType)<<" Bytes"<<endl;
    return 0;
}