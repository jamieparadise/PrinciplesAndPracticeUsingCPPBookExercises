#include "std_lib_facilies.h"

int main() {
	char letter{ 'a' };

	while (int(letter) <= int('z')) {
		cout << letter << '\t' << int(letter) << endl;
		letter = char(letter + 1);
	}

	return 0;
}