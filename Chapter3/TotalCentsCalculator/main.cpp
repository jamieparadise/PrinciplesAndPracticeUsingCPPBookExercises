#include "std_lib_facilies.h"
int main() {

	cout << "How many pennies do you have? ";
	int pennies{};
	constexpr int pennie_value{ 1 };
	cin >> pennies;
	cout << "How many nickels do you have? ";
	int nickels{};
	constexpr int nickel_value{ 5 };
	cin >> nickels;
	cout << "How many dimes do you have? ";
	int dimes{};
	constexpr int dime_value{ 10 };
	cin >> dimes;
	cout << "How many quarters do you have? ";
	int quarters{};
	constexpr int quarter_value{ 25 };
	cin >> quarters;
	cout << "How many half dollars do you have? ";
	int half_dollars{};
	constexpr int half_dollar_value{ 50 };
	cin >> half_dollars;
	cout << "How many dollars do you have? ";
	int dollars{};
	constexpr int dollar_value{ 100 };
	cin >> dollars;
	int total_cents{ pennies * pennie_value + nickels * nickel_value + dimes * dime_value
					+ quarters * quarter_value + half_dollars * half_dollar_value + dollars * dollar_value };
	if (pennies == 1) {
		cout << "You have " << pennies << " pennie." << endl;
	}
	else {
		cout << "You have " << pennies << " pennies." << endl;
	}
	if (nickels == 1) {
		cout << "You have " << nickels << " nickel." << endl;
	}
	else {
		cout << "You have " << nickels << " nickels." << endl;
	}
	if (dimes == 1) {
		cout << "You have " << dimes << " dime." << endl;
	}
	else {
		cout << "You have " << dimes << " dimes." << endl;
	}
	if (quarters == 1) {
		cout << "You have " << quarters << " quarter." << endl;
	}
	else {
		cout << "You have " << quarters << " quarters." << endl;
	}
	if (half_dollars == 1) {
		cout << "You have " << half_dollars << " half_dollar." << endl;
	}
	else {
		cout << "You have " << half_dollars << " half_dollars." << endl;
	}
	if (dollars == 1) {
		cout << "You have " << dollars << " dollar." << endl;
	}
	else {
		cout << "You have " << dollars << " dollars." << endl;
	}
	cout << "The value of all of your coins  is $" << static_cast<double>(total_cents)/100 << "."<< endl;
	return 0;
}