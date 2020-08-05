#include "std_lib_facilies.h"
int main() {
	cout << "Enter a operation then two numbers: ";
	char operation{};
	double num1{}, num2{};
	cin >> operation >> num1 >> num2;
	switch (operation) {
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	default:
		cout << "Invalid input" << endl;
	}
	
	return 0;
}