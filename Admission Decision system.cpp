#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//variables
	string StudentName;
	int age;
	double examscore;
	
	//prompt
	cout<<" Enter student name: ";
	getline(cin,StudentName);
	cout<<"Enter the student age: ";
	cin>> age;
	cout<<" Enter exam score: ";
	cin>> examscore;
	
	//requirements

	
	//Display
	cout<<"\n======================";
	cout<<"\n  Admission Decision  ";
	cout<<"\n Name : "<<StudentName;
	cout<<"\n Age : "<<age;
	cout<<"\n Exam score : "<<examscore;
	
		if (age>=18){
		if (examscore>=50){
			cout<<"\n Student Admitted";
		}else{
			cout<<"\n Not Admitted:Low score";
		}
        }else{
		cout<<"\n Not Admitted:Underage";
     	}
	
	return 0;
	
	
}