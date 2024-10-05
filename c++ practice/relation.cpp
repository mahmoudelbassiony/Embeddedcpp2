
    // Aggregation.
#include <iostream>
#include <string>
#include <vector>

class Department;
class Employee
{
private:
    std::string m_name;
    Department *department;

public:
    // Parameterized Constructor.
    Employee(std::string name) : m_name(name), department(nullptr) {}

    // setter for Department.
    void setDepartment(Department *newDepartment)
    {
        department = newDepartment;
    }
};
class Department
{
private:
    std::string name;
    std::vector<Employee> employees;

public:
    Department(std::string name)
    {
        this->name = name;
    }
    // add employee to department.

    void addEmployee(Employee *employee)
    {
        employees.push_back(*employee); // add employee
        employee->setDepartment(this);  // add the department to the
    }
};

using namespace std;
int main()
{
    Employee emp("Omar");  

    Department Sales("Sales");
    Sales.addEmployee(&emp);

    emp.setDepartment(&Sales);
}