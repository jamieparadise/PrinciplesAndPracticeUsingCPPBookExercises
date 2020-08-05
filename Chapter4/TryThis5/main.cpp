#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
	std::vector <string> disliked_words = { "Brocolli"};
	vector <string> words;

	for (string temp; cin >> temp;)
		words.push_back(temp);
	
	for (string word : words) {
		bool word_is_disliked{ false };
		for (string disliked_word : disliked_words) {
			if (disliked_word == word) {
				word_is_disliked = true;
				break;
			}
		}
		if (word_is_disliked) {
			cout << "BLEEP" << endl;
		}
		else {
			cout << word << endl;
		}
	}
	return 0;
}