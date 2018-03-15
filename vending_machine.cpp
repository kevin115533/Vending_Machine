#include <iostream>
using namespace std;

void whichDrink(char x);

int main() {
	char userNum;
	char question;
	char goAgain=true;

	while (goAgain == true) {
		cout << "Enter the number of which beverage would you like" << endl;
		cout << "1. Coke" << endl << "2. Root Beer" << endl << "3. Sprite" << endl << "4. Dr Pepper" << endl;
		cin >> userNum;

		whichDrink(userNum);

		cout << "Would you like another drink? y/n" << endl;
		cin >> question;
		if (question == 'Y' || question == 'y') {
			goAgain = true;
		}
		else {
			goAgain = false;
		}

	}
	return 0;
}

void whichDrink(char x) {
	switch (x) {
	case('1'): {
			cout << "Here is your Coke" << endl;
			break;
		}
	case('2'): {
		cout << "Here is your Root Beer" << endl;
		break;
	}
	case('3'): {
		cout << "Here is your Sprite" << endl;
		break;
	}
	case('4'): {
		cout << "Here is your Dr Pepper" << endl;
		break;
	}
	default: {
		cout << "Not a valid choice, here is your money back" << endl;
		break;
	}
	}
}
