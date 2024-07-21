#include "ClassRoom.h"
#include <iostream>
#include <fstream>
using namespace std;

// Constructor
ClassRoom::ClassRoom(string cName) : className(cName), numStudents(0) {}

// Getter and Setter functions
string ClassRoom::getClassName() const { return className; }
void ClassRoom::setClassName(const string& cName) { className = cName; }

int ClassRoom::getNumStudents() const { return numStudents; }
void ClassRoom::setNumStudents(int n) { numStudents = n; }

Student* ClassRoom::getStudentArray() { return studentArray; }
void ClassRoom::setStudentArray(Student students[], int n) {
    numStudents = n;
    for (int i = 0; i < n; ++i) {
        studentArray[i] = students[i];
    }
}

// Function to read and create student array from file
void ClassRoom::readAndCreateStudentArray() {
    ifstream inFile("studentInfo.txt");
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return;
    }

    string lName, fName, sID;
    double g1, g2;
    while (inFile >> lName >> fName >> sID >> g1 >> g2) {
        Student studentObj(fName, lName, sID, g1, g2);
        studentArray[numStudents++] = studentObj;
    }

    inFile.close();
}

// Function to display all students
void ClassRoom::displayAllStudents() const {
    cout << "Last Name\tFirst Name\tStudent ID\tGPA1\tGPA2\tAverage GPA" << endl;
    cout << "--------------------------------------------------------------" << endl;
    for (int i = 0; i < numStudents; ++i) {
        studentArray[i].displayStudent();
    }
}

// Function to calculate average GPA of all students
double ClassRoom::calcStudentAvg() const {
    double totalAvg = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        totalAvg += studentArray[i].calcAvgGpa();
    }
    return totalAvg / numStudents;
}

// Function to get number of students
int ClassRoom::getNumberStudents() const {
    return numStudents;
}
