#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string firstName;
    std::string lastName;
    std::string jobTitle;
    double salary;

public:
    // Default constructor
    Employee();

    // Constructor with parameters
    Employee(std::string fn, std::string ln, std::string jt, double sal);

    // Getters and setters
    std::string getFirstName() const;
    void setFirstName(std::string fn);

    std::string getLastName() const;
    void setLastName(std::string ln);

    std::string getJobTitle() const;
    void setJobTitle(std::string jt);

    double getSalary() const;
    void setSalary(double sal);

    // Display employee details
    void display() const;
};

#endif
