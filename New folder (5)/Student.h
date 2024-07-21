#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    string studentID;
    double gpa1;
    double gpa2;

public:
    // Null Constructor
    Student();

    // Constructor with parameters
    Student(string, string, string, double, double);

    // Getter and Setter functions
    string getFirstName() const;
    void setFirstName(const string&);
    
    string getLastName() const;
    void setLastName(const string&);
    
    string getStudentID() const;
    void setStudentID(const string&);
    
    double getGpa1() const;
    void setGpa1(double);
    
    double getGpa2() const;
    void setGpa2(double);

    // Function to calculate average GPA
    double calcAvgGpa() const;

    // Function to display student information
    void displayStudent() const;
};

#endif
