#include <iostream>
#include <string>
using namespace std;

struct Student {
    int ID;
    string Name;
    float GPA;
    float Percentage;
    int marks[5];
};

int TotalMarks(Student student) {
    int totalMarks = 0;

    for (int i = 0; i < 5; i++) {
        totalMarks += student.marks[i];
    }

    return totalMarks;
}

int main() {
    Student student;

    cout << "Enter Student ID: ";
    cin >> student.ID;

    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, student.Name);

    cout << "Enter Student GPA: ";
    cin >> student.GPA;

    cout << "Enter Student Percentage: ";
    cin >> student.Percentage;

    cout << "Enter 5 Marks: ";
    for (int i = 0; i < 5; i++) {
        cin >> student.marks[i];
    }

    int total = TotalMarks(student);

    cout << "\nTotal Marks of " << student.Name << ": " << total << endl;

    return 0;
}

