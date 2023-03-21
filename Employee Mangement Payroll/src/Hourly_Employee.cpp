#include "Hourly_Employee.h"

Hourly_Employee::Hourly_Employee()
{
    //ctor
}


void Hourly_Employee::title()
{
    cout<<"WELCOME TO THE HOURLY EMPLOYEE PORTAL"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}

void Hourly_Employee::getSalary()
{
    cout<<endl<<"Please enter your employee number: ";
    cin>>Emp_Num;
    cout<<"Please enter your name here: ";
    cin>>Emp_Name;
    cout<<"Please enter your hourly wage here: ";
    cin>>hourly_wage;
    cout<<"Please enter the number of hours you worked: ";
    cin>>hours_worked;
    cout<<endl;
}

void Hourly_Employee::display()
{
    Salary=hourly_wage*hours_worked;
    cout<<"This is the details of "<<Emp_Name<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout<<"The employee number is "<<Emp_Num<<endl;
    cout<<"The employee name is "<<Emp_Name<<endl;
    cout<<Emp_Name<<"'s hourly wage is : "<<hourly_wage<<endl;
    cout<<Emp_Name<<" worked for "<<hours_worked<<"hours"<<endl;
    cout<<"Therefore "<<Emp_Name<<"'s salary is : "<<Salary<<endl;
}
