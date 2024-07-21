#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Student.h"
#include <string>
using namespace std;

class ClassRoom {
private:
    string className;
    int numStudents;
    Student studentArray[10];

public:
    // Constructor
    ClassRoom(string);

    // Getter and Setter functions
    string getClassName() const;
    void setClassName(const string&);
    
    int getNumStudents() const;
    void setNumStudents(int);
    
    Student* getStudentArray();
    void setStudentArray(Student[], int);

    // Functions
    void readAndCreateStudentArray();
    void displayAllStudents() const;
    double calcStudentAvg() const;
    int getNumberStudents() const;
};

#endif
