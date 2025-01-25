#include <iostream>
#include <string>
using namespace std;

// Structure for student data
struct Student {
    int ID;
    string Name;
    float GPA;
    int marks[7];
};

// First student as global
Student student1 = {19, "Daniyal", 3.5, {23, 60, 78, 88, 92, 35, 84}};

void print(Student student) {								// Print functon
    cout << "Student ID: " << student.ID << endl;
    cout << "Student Name: " << student.Name << endl;
    cout << "Student GPA: " << student.GPA << endl;

    cout << "Marks: ";
    for (int i = 0; i < 7; i++) {
        cout << student.marks[i] << " ";
    }
    cout << endl;
}

int main() {
    // Second student as local
    Student student2 = {102, "Waleed", 3.6, {23, 55, 70, 76, 88, 92, 65}};

    cout << "Student 1 Data (Defined as global):" << endl;	// Printing first student
    print(student1);

    cout << "\nStudent 2 Data (Defined as local):" << endl;	// Printing second student
    print(student2);

    return 0;
}
s
