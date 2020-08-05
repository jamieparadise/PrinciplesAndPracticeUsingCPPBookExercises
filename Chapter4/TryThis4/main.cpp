#include "std_lib_facilies.h"

int main() {
	char letter{ 'a' };

	for (int i{};i<26;i++){
		cout << char(letter+i) << '\t' << int(letter)+i << endl;
	}

	return 0;
}