#include "Student.h"
#include <iostream>
using namespace std;

// Null Constructor
Student::Student() : firstName(""), lastName(""), studentID(""), gpa1(0.0), gpa2(0.0) {}

// Constructor with parameters
Student::Student(string fName, string lName, string sID, double g1, double g2) 
    : firstName(fName), lastName(lName), studentID(sID), gpa1(g1), gpa2(g2) {}

// Getter and Setter functions
string Student::getFirstName() const { return firstName; }
void Student::setFirstName(const string& fName) { firstName = fName; }

string Student::getLastName() const { return lastName; }
void Student::setLastName(const string& lName) { lastName = lName; }

string Student::getStudentID() const { return studentID; }
void Student::setStudentID(const string& sID) { studentID = sID; }

double Student::getGpa1() const { return gpa1; }
void Student::setGpa1(double g1) { gpa1 = g1; }

double Student::getGpa2() const { return gpa2; }
void Student::setGpa2(double g2) { gpa2 = g2; }

// Function to calculate average GPA
double Student::calcAvgGpa() const {
    return (gpa1 + gpa2) / 2.0;
}

// Function to display student information
void Student::displayStudent() const {
    cout << lastName << "\t\t" << firstName << "\t\t" << studentID 
         << "\t" << gpa1 << "\t" << gpa2 << "\t" << calcAvgGpa() << endl;
}
