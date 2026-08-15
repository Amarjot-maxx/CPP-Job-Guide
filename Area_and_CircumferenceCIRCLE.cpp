#include<iostream>
#include<cmath>
const float PI = 3.141;
using namespace std;
inline float area(float r)
{
    return PI * pow(r,2);
}
inline float circumference(float r)
{
    return 2 * PI * r;
}
int main()
{
    char repeat;
    cout<<"------Area and Circumference of CIRCLE------"<<endl;
    float radius;
    do
    {
        cout<<"Enter the radius of the circle: ";
        cin>>radius;

        cout<<"What do you want to calculate? \n1. Area of Circle\n2. Circumference of CIRCLE\n3. Both"<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Area of Circle of radius "<<radius<<" is: "<<area(radius)<<" unit²"<<endl;
            break;
        case 2:
            cout<<"Circumference of Circle of radius "<<radius<<" is: "<<circumference(radius)<<" unit"<<endl;
            break;
        case 3:
            cout<<"Area of Circle of radius "<<radius<<" is: "<<area(radius)<<" unit²"<<endl;
            cout<<"Circumference of Circle of radius "<<radius<<" is: "<<circumference(radius)<<" unit"<<endl;
            break;
        default:
            cout<<"Invalid choice!(1, 2 or 3)"<<endl;
            break; 
        }
        cout<<"Do you want to repeat theprogram: (y/n): ";
        
        cin>>repeat;
    }while(repeat == 'y'||repeat == 'Y');
    return 0;
}