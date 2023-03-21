#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H

#include <Employee.h>


class Salaried_Employee : public Employee
{
    public:
        Salaried_Employee();
        void getSalary();
        void display();
        void title();

    protected:

    private:
};

#endif // SALARIED_EMPLOYEE_H
