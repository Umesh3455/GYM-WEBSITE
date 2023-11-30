#include<iostream>
using namespace std;
int main()
{
    double salary;

    cout<<"enter salary of an employee";
    cin>>salary;

    if(salary>250000&&salary<=500000)
    cout<<"tax will be"<<(5*salary/100);
    else
    if(salary>500000&&salary<=100000)
    cout<<"tax will be"<<(20*salary/100);
    else
    cout<<"tax will be"<<(30*salary/100);
   
    return 0;
}