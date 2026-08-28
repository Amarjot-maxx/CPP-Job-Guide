#include<iostream>
using namespace std;

int main()
{
    float basic_salary, housing, living, gross_salary;
    cout<<"________GROSS SALARY CLACULATOR________\n";
    cout<<"Enter you salary(Dollars): $";
    cin>>basic_salary;
    housing = 0.20 * basic_salary;
    living = 0.25 * basic_salary;
    int allowance = 150;
    gross_salary = basic_salary + housing + living + allowance;
    cout<<"Gross Salary: $"<<gross_salary<<endl;
    return 0;

}