#include <iostream>
using namespace std;

class Grade {
public:
    string courseCode;
    double credits;
    string letterGrade;
};

class Student {
public:
    string id;
    string name;
    Grade grades[50];
    int numGrades;

    // ABSTRACTION -- HIDING DETAILS
    void printTranscript() {
        cout << id << " " << name << endl;
        for (int i = 0; i < numGrades; i++)
            cout << grades[i].courseCode << " " << grades[i].letterGrade << endl;
    }

    void addGrade(string courseCode, double credits, string letterGrade) {
        grades[numGrades].courseCode = courseCode;
        grades[numGrades].credits = credits;
        grades[numGrades].letterGrade = letterGrade;
        numGrades = numGrades + 1;
    }

    double getCGPA() {
        return 5.0;
    }
};

int main() {
    int numStudents = 0;

    Student students[100];
    students[0].name = "Rakibul Hasan";
    students[0].id = "420";
    students[0].addGrade("CSE1034", 1.0, "A+");
    students[0].addGrade("MATH1034", 3.0, "B-");
    students[0].addGrade("ENG1001", 0.0, "A");

    numStudents = numStudents + 1;

    students[1].name = "Hasan Tareque";
    students[1].id = "421";
    students[1].addGrade("ENG1001", 0.0, "F");
    numStudents = numStudents + 1;

    for (int i = 0; i < numStudents; i++)
        students[i].printTranscript();
/*
    int x = 10;
    string names[50000];
    string ids[50000];
    names[0] = "Rakibul Hasan";
    names[1] = "Hasan Tareque";
    ids[0] = "420";
    ids[1] = "421";
    cout << ids[0] << " " << names[0] << endl;
    */
    return 0;
}
