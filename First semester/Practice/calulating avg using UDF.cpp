#include<iostream>
using namespace std;
//declaration and definition
float calculateAvg( int marks[] , int size);//here one parameter is of array and second is of its size
int main(){
	int size;
	cout<<"Enter size"<<endl;
	cin>>size;
	
	int studentsMarks[size];
	for(int i=0 ; i<size ; i++){
		cout<<"Enter your marks"<<i+1<<" "<<endl;
		cin>>studentsMarks[i];
	}
	float avg = calculateAvg(studentsMarks , size);
	cout<<"Your average is "<<avg<<endl;
	return 0;
}
float calculateAvg( int marks[] , int size){
	int sum = 0;
	for(int i =0 ; i< size ; i++){
		sum+=marks[i]; // sum = sum + marks[i]
	}
	return (float)sum/size;
}
