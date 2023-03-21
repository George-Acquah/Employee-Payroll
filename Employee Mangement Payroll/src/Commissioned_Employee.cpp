#include "Commissioned_Employee.h"

Commissioned_Employee::Commissioned_Employee()
{
    //ctor
}

void Commissioned_Employee::title()
{
    cout<<"WELCOME TO THE COMMISIONED EMPLOYEE PORTAL"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}

void Commissioned_Employee::getSalary()
{
    cout<<endl<<"Please enter your employee number: ";
    cin>>Emp_Num;
    cout<<"Please enter your name here: ";
    cin>>Emp_Name;
    cout<<"Please enter your base salary here: ";
    cin>>Salary;
    cout<<"Please enter the overtime hours here: ";
    cin>>overtime;
    cout<<endl;
}

void Commissioned_Employee::display()
{
    Salary = Salary+(overtime*0.25);
    cout<<"This is the details of "<<Emp_Name<<endl;
    cout<<"The employee number is "<<Emp_Num<<endl;
    cout<<"The employee name is "<<Emp_Name<<endl;
    cout<<Emp_Name<<"'s overtime hours is : "<<overtime<<endl;
    cout<<Emp_Name<<"'s salary is : "<<Salary<<endl;
}
