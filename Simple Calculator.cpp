#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double num1, num2, result;
	char op;
	
	//input
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter operator (+, -, *, / ) : ";
	cin>>op;
	cout<<"Enter the second number: ";
	cin>>num2;
	
	switch(op) {
		case '+':
			result = num1 + num2;
			cout<<"Result : "<< result;
			break;
		case '-':
			result = num1 - num2;
			cout<<"Result : "<<result;
			break;
		case '*':
			result = num1 * num2;
			cout<<"Result : "<<result;
			break;
		case '/':
			if (num2 == 0){
				cout<<"Error division by zero is not allowed";
			}else{
				result = num1 / num2;
				cout<<"Result : "<<result;
			}
			break;
		
		default:
			cout<<"Invalid operator";
	}
	
	
	return 0;
	
}