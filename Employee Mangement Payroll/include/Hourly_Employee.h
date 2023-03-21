#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H

#include <Employee.h>


class Hourly_Employee : public Employee
{
    public:
        Hourly_Employee();
        void getSalary();
        void display();
        void title();

    protected:

    private:
        int hours_worked;
        float hourly_wage;
};

#endif // HOURLY_EMPLOYEE_H
