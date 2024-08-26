#include "Employee.h"
#include <iostream>

// Default constructor
Employee::Employee() : firstName(""), lastName(""), jobTitle(""), salary(0.0) {}

// Constructor with parameters
Employee::Employee(std::string fn, std::string ln, std::string jt, double sal)
    : firstName(fn), lastName(ln), jobTitle(jt), salary(sal) {}

// Getters and setters
std::string Employee::getFirstName() const {
    return firstName;
}

void Employee::setFirstName(std::string fn) {
    firstName = fn;
}

std::string Employee::getLastName() const {
    return lastName;
}

void Employee::setLastName(std::string ln) {
    lastName = ln;
}

std::string Employee::getJobTitle() const {
    return jobTitle;
}

void Employee::setJobTitle(std::string jt) {
    jobTitle = jt;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double sal) {
    salary = sal;
}

// Display employee details
void Employee::display() const {
    std::cout << lastName << " " << firstName << " " << jobTitle << " " << salary << std::endl;
}
