#include "std_lib_facilies.h"
int main() {
	cout << "Enter a spelled out number: ";
	string num_string{};
	cin >> num_string;
	int num{10};

		if (num_string == "one") num = 1;
		if (num_string == "two") num = 2;
		if (num_string == "three") num = 3;
		if (num_string == "four") num = 4;
		if (num_string == "five") num = 5;
		if (num_string == "six") num = 6;
		if (num_string == "seven") num = 7;
		if (num_string == "eight") num = 8;
		if (num_string == "nine") num = 9;
		if (num_string == "zero") num = 0;
	
	if (num == 10) { cout << "Sorry I don't understand."<<endl; }
	else {
		cout << "That is the number: " << num << endl;
	}
	return 0;
}