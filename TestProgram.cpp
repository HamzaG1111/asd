#include "Employee.h"
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream inFile("employees.txt");
    std::vector<Employee> employees;

    std::string firstName, lastName, jobTitle;
    double salary;
    
    // Reading data from file and creating Employee objects
    while (inFile >> lastName >> firstName >> jobTitle >> salary) {
        employees.push_back(Employee(firstName, lastName, jobTitle, salary));
    }
    inFile.close();

    // Display all employees
    std::cout << "Employee Records:" << std::endl;
    for (const auto& emp : employees) {
        emp.display();
    }

    // Calculate and display average salary
    double totalSalary = 0;
    for (const auto& emp : employees) {
        totalSalary += emp.getSalary();
    }
    double averageSalary = totalSalary / employees.size();
    std::cout << "Average salary: " << averageSalary << std::endl;

    // Apply 5% raise and display updated employee records
    std::cout << "\nEmployees after 5% salary increase:" << std::endl;
    totalSalary = 0;
    for (auto& emp : employees) {
        double newSalary = emp.getSalary() * 1.05;
        emp.setSalary(newSalary);
        emp.display();
        totalSalary += newSalary;
    }

    // Calculate and display new average salary
    double newAverageSalary = totalSalary / employees.size();
    std::cout << "New average salary: " << newAverageSalary << std::endl;

    return 0;
}
