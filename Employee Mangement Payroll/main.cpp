#include <iostream>

#include "Salaried_Employee.h"
#include "Hourly_Employee.h"
#include "Commissioned_Employee.h"

using namespace std;

int cat;
int inp;
string ans;

void mainHeading()
{
    cout<<"WELCOME TO MTN GHANA PAYROLL APPLICATION"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;

    cout<<"Which category of workers do you belong?"<<endl<<endl;
    cout<<"1. Salaried Employee"<<endl;
    cout<<"2. Hourly Employee"<<endl;
    cout<<"3. Commissioned Employee"<<endl<<endl;
    cout<<"Please make your selection to proceed: ";
    cin>>cat;
    cout<<endl;

}
void nav()
{
    cout<<endl<<"1. MAIN MENU"<<endl;
    cout<<"2. EXIT"<<endl;
    cout<<endl<<"Please make an input: ";
    cin>>inp;
    cout<<endl;
}

int main()
{
    Employee *Emp;

    Salaried_Employee Sal;
    Hourly_Employee HE;
    Commissioned_Employee CE;


    do
    {
        mainHeading();
    if(cat==1)
    {
        Emp=&Sal;
        Sal.title();
        Emp->getSalary();
        Emp->display();
        nav();
        if(inp==1)
        {
            mainHeading();
        }
        else
        {
            cout<<"Your input was "<<inp<<endl;
            return 0;
        }
    }
    else if(cat==2)
    {
        Emp=&HE;
        HE.title();
        Emp->getSalary();
        Emp->display();
        nav();
        if(inp==1)
        {
            mainHeading();
        }
        else
        {
            cout<<"Your input was "<<inp<<endl;
            return 0;
        }
    }
    else if(cat==3)
    {
        Emp=&CE;
        CE.title();
        Emp->getSalary();
        Emp->display();
        nav();
        if(inp==1)
        {
            mainHeading();
        }
        else
        {
            cout<<"Your input was "<<inp<<endl;
            //return 0;
        }
    }
    else
    {
        cout<<"Invalid selection!!! \n You don't fall under any category..."<<endl;
    }
    cout<<"Do you want to continue? ";
    cin>>ans;
    }
    while(ans=="y"||ans=="Y");
    return 0;
}
