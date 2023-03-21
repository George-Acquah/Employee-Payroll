#include "Salaried_Employee.h"
#include "Employee.h"
#include <iostream>

using namespace std;

Salaried_Employee::Salaried_Employee()
{
    //ctor
}



void Salaried_Employee::title()
{
    cout<<"WELCOME TO THE SALARIED EMPLOYEE PORTAL"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}

void Salaried_Employee::getSalary()
{
    cout<<endl<<"Please enter your employee number: ";
    cin>>Emp_Num;
    cout<<"Please enter your name here: ";
    cin>>Emp_Name;
    cout<<"Please enter your salary here: ";
    cin>>Salary;
    cout<<endl;
}

void Salaried_Employee::display()
{
    cout<<"This is the details of "<<Emp_Name<<endl;
    cout<<"The employee name is "<<Emp_Name<<endl;
    cout<<"The employee number is "<<Emp_Num<<endl;
    cout<<Emp_Name<<"'s salary is : "<<Salary<<endl;
}
