#include<iostream>
using namespace std;
class marks
{
    float maths, physics, chemistry, biology, code, percentage;
    public:
    void getdata()
    {
        cout<<"Enter the marks of \n1.Maths\n2.Physics\n3.Chemistry\n4.Biology\n5.Coding\n";
        cin>>maths>>physics>>chemistry>>biology>>code;
    }
    void putdata()
    {
        percentage = ((maths+physics+chemistry+biology+code)/500) * 100;
        cout<<"The Percentage Obtained: "<<percentage<<"%"<<endl;
    }
};
int main()
{
    marks A;
    A.getdata();
    A.putdata();
    return 0;

}