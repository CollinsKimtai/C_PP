#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


	string EmployeeName;
	double BasicSalary;
	int OvertimeHours;
	double OvertimePay;
	double salary;
	
	
	void getEmployeeDetails() {
		cout<<"Enter Employee Name : ";
		getline(cin,EmployeeName);
		cout<<"Enter the basic salary : ";
		cin>>BasicSalary;
		cout<<"Enter Overtime hours done: ";
		cin>>OvertimeHours;
	}
	double calculateOvertimePay(int OvertimeHours){
		double RatePerHour = 300;
		
		return  OvertimeHours * RatePerHour; 
	}
	double  calculateNetSalary(double BasicSalary,double OvertimePay){
		return  BasicSalary + OvertimePay;
	}
	void displayPayslip(){
		cout <<"\n-----PAYSLIP-----";
		cout <<"\nEmployee name: "<<EmployeeName;
		cout <<"\nBasic Salary: "<<BasicSalary;
		cout <<"\nOvertime pay: "<<OvertimePay;
		cout <<"\n Salary: "<<salary;
		
	}
	
	int main(){
		//input
		getEmployeeDetails();
		
		
		//calculations
		OvertimePay = calculateOvertimePay(OvertimeHours);
		salary = calculateNetSalary(BasicSalary,OvertimePay);
		
		//display
		displayPayslip();
		
		return 0;
		
	}
	
	
	
	
	
	
	
	
	
