#include "std_lib_facilies.h"
int main() {
	cout << "Please enter three words: ";
	string word1{}, word2{}, word3{};
	cin >> word1 >> word2 >> word3;
	string temp{};
	if (word1 > word2) {
		temp = word1;
		word1 = word2;
		word2 = temp;
	}
	if (word1 > word3) {
		temp = word1;
		word1 = word3;
		word3 = temp;
	}
	if (word2 > word3) {
		temp = word2;
		word2 = word3;
		word3 = temp;
	}
	cout << word1 << " " << word2 << " " << word3 << endl;
	return 0;
}