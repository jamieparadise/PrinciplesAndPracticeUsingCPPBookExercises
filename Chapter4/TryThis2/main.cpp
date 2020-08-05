#include "std_lib_facilies.h"

int main() {
	cout << "Please enter a value followed by a currency: ";
	double value{};
	char currency{};
	constexpr double yen_to_dollars{ 0.0095 };
	constexpr double kroner_to_dollars{ 0.11 };
	constexpr double pounds_to_dollars{ 1.22 };
	cin >> value >> currency;
	switch (currency) {
	case 'y':
		cout << value << " Yen is equal to " << yen_to_dollars * value << " Dollars.";
		break;
	case 'k':
		cout << value << " Kroner is equal to " << kroner_to_dollars * value << " Dollars.";
		break;
	case 'p':
		cout << value << " Pounds is equal to " << pounds_to_dollars * value << " Dollars.";
	default:
		cout << "Sorry I don't understand.";
		break;
	}


}