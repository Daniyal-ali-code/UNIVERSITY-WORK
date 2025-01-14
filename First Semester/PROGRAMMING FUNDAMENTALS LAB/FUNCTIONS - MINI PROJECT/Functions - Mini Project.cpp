#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to store student information
struct Student {
    string name;
    int id;
    string department;
};

// Function prototypes
void addStudent(vector<Student>& students);
void displayStudents(const vector<Student>& students);
void searchStudentByID(const vector<Student>& students);
void updateStudent(vector<Student>& students);
void deleteStudent(vector<Student>& students);

int main() {
    vector<Student> students;
    int choice;

    do {
        // Display menu options
        cout << "\n--- Student Management System ---" << endl;
        cout << "1. Add a Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search for a Student by ID" << endl;
        cout << "4. Update Student Information" << endl;
        cout << "5. Delete a Student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle menu options
        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayStudents(students);
                break;
            case 3:
                searchStudentByID(students);
                break;
            case 4:
                updateStudent(students);
                break;
            case 5:
                deleteStudent(students);
                break;
            case 6:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

// Function to add a new student
void addStudent(vector<Student>& students) {
    Student newStudent;
    cout << "\nEnter student details:" << endl;
    cout << "Name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, newStudent.name);
    cout << "ID: ";
    cin >> newStudent.id;
    cout << "Department: ";
    cin.ignore();
    getline(cin, newStudent.department);

    students.push_back(newStudent);
    cout << "Student added successfully!" << endl;
}

// Function to display all students
void displayStudents(const vector<Student>& students) {
    cout << "\n--- List of Students ---" << endl;
    if (students.empty()) {
        cout << "No students found." << endl;
        return;
    }

    for (size_t i = 0; i < students.size(); i++) {
        const Student& student = students[i];
        cout << "Name: " << student.name << ", ID: " << student.id << ", Department: " << student.department << endl;
    }
}

// Function to search for a student by ID
void searchStudentByID(const vector<Student>& students) {
    int searchID;
    cout << "\nEnter the student ID to search: ";
    cin >> searchID;

    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == searchID) {
            cout << "Student found!" << endl;
            cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Department: " << students[i].department << endl;
            return;
        }
    }
    cout << "Student with ID " << searchID << " not found." << endl;
}

// Function to update student information
void updateStudent(vector<Student>& students) {
    int updateID;
    cout << "\nEnter the student ID to update: ";
    cin >> updateID;

    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == updateID) {
            cout << "Student found! Enter new details:" << endl;
            cout << "Name: ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Department: ";
            getline(cin, students[i].department);
            cout << "Student information updated successfully!" << endl;
            return;
        }
    }
    cout << "Student with ID " << updateID << " not found." << endl;
}

// Function to delete a student
void deleteStudent(vector<Student>& students) {
    int deleteID;
    cout << "\nEnter the student ID to delete: ";
    cin >> deleteID;

    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == deleteID) {
            students.erase(students.begin() + i);
            cout << "Student deleted successfully!" << endl;
            return;
        }
    }
    cout << "Student with ID " << deleteID << " not found." << endl;
}

