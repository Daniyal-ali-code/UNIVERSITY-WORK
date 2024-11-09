#include <iostream>
using namespace std;
struct Student {
    int id;
    string name;
    float gpa;
};

int main() {
    Student student1 = {1, "Daniyal Ali", 3.8};
	cout << "ID:" << student1.id << endl;
    cout << "Name: " << student1.name << endl;
    cout << "GPA: " << student1.gpa << endl;
    return 0;
}








