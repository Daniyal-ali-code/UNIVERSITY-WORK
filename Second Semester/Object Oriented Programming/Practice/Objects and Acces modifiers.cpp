#include <iostream>
using namespace std;

class Teacher{
public: // Access modifier

	// Class members / Attributes
	string name;
	float salary;
	string subject;
	string dept;
	
	// Methods / Member Functions
	void changeDept(){
		string newDept;
		cout << "Enter new department: ";
		cin >> newDept;
		dept = newDept;
	}
};

int main(){

	// Objects
	Teacher t1;
	t1.name = "Daniyal Ali";	
	t1.salary = 40000;
	t1.subject = "OOP";
	t1.dept = "Computer Science";

	// Printing
	cout << "The teacher's name is " << t1.name << endl;
	cout << "Their salary is " << t1.salary << endl;
	cout << "for subject " << t1.subject << endl;
	cout << "Department of " << t1.dept << endl;

	string choice;
	cout << "\nDo you want to change the department of the teacher?" << endl;
	cout << "Press Y for yes: ";
	cin >> choice;
	
	if (choice == "y" || choice == "Y"){
		t1.changeDept();
		cout << "Thier department is now " << t1.dept;
	}
	
	return 0;
}
