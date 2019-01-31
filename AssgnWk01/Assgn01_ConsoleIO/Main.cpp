// Assignment 1 - Console I / O
// Tami Sweitzer

#include <iostream>
#include <conio.h>

using namespace std; 

int main() {

	int input;
	cout << "Enter an integer between 1 and 5 " << endl;
	cin >> input;

	if (input < 1 || input > 5) {
		cout << "You did it wrong. Now the game is over." << endl;
		exit(0);
	}
	else if (input >= 1 && input <= 5) {
		for (int i = 0; i < input; i++) {
			cout << "\"Those who dare to fail miserably can achieve greatly. \t-John F. Kennedy\"" << endl;
		}
	}
	else {
		cout << "Something went wrong." << endl;
		exit(0);
	}


	







	_getch();
	return 0;
}