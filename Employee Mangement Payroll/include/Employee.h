#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
    public:
        Employee();
        virtual void getSalary()=0;
        virtual void display()=0;

    protected:
        int Emp_Num;
        char Emp_Name[30];
        float Salary;

    private:
};

#endif // EMPLOYEE_H
