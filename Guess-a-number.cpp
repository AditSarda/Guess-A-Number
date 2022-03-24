#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int num = rand() % 15;
	int guess;
	cout << endl;
	cout << "Enter your guess(0-15):";
	cin >> guess;

	if (guess <= 15 && guess >= 0) {
		if (guess == num) {
			cout << "You Win! :)" << endl;
		}
		else {
			cout << "You Lose!" << endl;
			cout << "Correct Answer:" << num;
		}
	}
	else {
		cout << "Invalid Number";
	}

	return 0;
}

