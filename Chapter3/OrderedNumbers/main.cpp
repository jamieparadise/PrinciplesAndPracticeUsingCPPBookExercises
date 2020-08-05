#include "std_lib_facilies.h"
int main() {
	cout << "Please enter three integers: ";
	int num1{}, num2{}, num3{};
	cin >> num1 >> num2 >> num3;
	int temp{};
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1 > num3) {
		temp = num1;
		num1 = num3;
		num3 = temp;
	}
	if (num2 > num3) {
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	cout << num1 << " " << num2 << " " << num3 << endl;
	return 0;
}