 #include <string>
class Employee
using std::string;
{
public:
    Employee (string,string,int);
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
