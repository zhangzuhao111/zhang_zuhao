#include <string>
using std::string;
class Employee
{
public:
    explicit Employee (string,string,int);
    void setFirstName( string );
    string getFirstName();
    void setLastName( string );
    string getLastName();
    void setMonthlySalary( int );
    int getMonthlySalary();
private:
    string firstName;
    string lastName;
    int monthlySalary;
};
