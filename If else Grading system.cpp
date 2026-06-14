#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string Studentname;
	int ExamMarks;
	char Grade;
	
	//input
	cout<<"Enter student name:  ";
	getline(cin,Studentname);
	cout<<"Enter Exam marks:  ";
	cin >> ExamMarks;
	
	if (ExamMarks>=70 && 100){
		Grade = 'A' ;
	}else if (ExamMarks>=60){
		Grade = 'B';
	}else if (ExamMarks>=50){
		Grade = 'C';
	}else if (ExamMarks>=40){
		Grade = 'D';
	}else{
		Grade = 'E';
	}
	
	//Display details
	cout<<"\n=========================";
	cout<<"\n     GRADING SYSTEM      ";
	cout<<"\n Student Name: "<< Studentname;
	cout<<"\n Exam Marks:  "<< ExamMarks;
	cout<<"\n Grade achieved:  "<< Grade;
	
return 0;	

	
	
}