#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
    Employee employee1("Meng","Zhang",4500);
    Employee employee2("Tom","Wang",4000);
    cout << "Employees' yearly salaries:"<<endl;
    int monthlySalary1 = employee1.getMonthlySalary();
    cout << employee1.getFirstName() << "" << employee1.getLastName() << ":$" << monthlySalary1 * 12 << endl;
    int monthlySalary2 = employee2.getMonthlySalary();
    cout << employee2.getFirstName() << "" << employee2.getLastName() << ":$" << monthlySalary2 * 12 << endl;
    employee1.setMonthlySalary( monthlySalary1 * 1.1);
    employee2.setMonthlySalary( monthlySalary2 * 1.1);
    cout << "\nEmployees' yearly salaries after 10% raise:" <<endl;
    monthlySalary1 = employee1.getMonthlySalary();
    cout << employee1.getFirstName() << "" << employee1.getLastName() << ":$" << "monthlySalary1*12" << endl;
    monthlySalary2 = employee2.getMonthlySalary();
    cout << employee2.getFirstName() << "" << employee2.getLastName() << ":$" << "monthlySalary2*12" <<endl;
    return 0;

}
