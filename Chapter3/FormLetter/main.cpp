#include "std_lib_facilies.h"
int main() {
	cout << "Please enter your name: ";
	string name;
	cin >> name;

	cout << "Please recipient name: ";
	string recipient;	
	cin >> recipient;

	cout << "Please enter the age of the recipient: ";
	int recipient_age{};
	cin >> recipient_age;
	if (recipient_age > 110 or recipient_age < 0) {
		simple_error("you're kidding!");
	}
	string recipient_message{};
	if (recipient_age < 12) {
		recipient_message = "Next year you will be " + to_string(recipient_age + 1);
	} else if (recipient_age == 17) {
		recipient_message = "Next year you will be able to vote";
	} else if (recipient_age > 70){
		recipient_message = "I hope you enjoy retirement.";
	}
	cout << "Please enter the name of a friend: ";
	string friend_name;
	cin >> friend_name;


	cout << "Is your friend male or female. Please enter m or f: ";
	char friend_sex{'0'};
	cin >> friend_sex;
	string friend_pronoun{"them" };
	if (friend_sex == 'm') {
		friend_pronoun = "him";
	}
	else if (friend_sex == 'f') {
		friend_pronoun = "her";
	}


	cout << "Dear " << recipient << ", Hope you are keeping well." << endl;
	cout << "I heard you just had your birthday and you are " << recipient_age << " years old." << endl;
	cout << recipient_message << endl;
	cout << "Have you heard from " << friend_name << " recently?" << endl;
	cout << "If you see " << friend_name << " please ask " << friend_pronoun <<" to call me."<< endl;
	cout << "From your dear friend, " << name << ".\n";


	return 0;
}
