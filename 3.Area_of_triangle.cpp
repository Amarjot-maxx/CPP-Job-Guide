#include <iostream>
using namespace std;

int main()
{
    float base, height, area;

    cout<<"Enter the Height of Triangle(in Cms): ";
    cin>>height;

    cout<<"Enter the Base of the Triangle(in Cms): ";
    cin>>base;

    float Area = 0.5 * height * base;
    cout<<"The area of Triangel of height "<<height<<"cm"<<" and base "<<base<<"cm is: "<<Area<<"cm3\n";
    return 0;
}
