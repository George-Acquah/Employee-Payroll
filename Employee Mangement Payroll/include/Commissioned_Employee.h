#ifndef COMMISSIONED_EMPLOYEE_H
#define COMMISSIONED_EMPLOYEE_H

#include <Employee.h>


class Commissioned_Employee : public Employee
{
    public:
        Commissioned_Employee();

        void getSalary();
        void display();
        void title();

    protected:

    private:
        int overtime;
};

#endif // COMMISSIONED_EMPLOYEE_H
