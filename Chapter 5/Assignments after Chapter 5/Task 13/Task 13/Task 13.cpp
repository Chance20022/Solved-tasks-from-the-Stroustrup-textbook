#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int randoms() {

	int num = 0;
	num = 1 + rand() % 10; // 0 to 9
	if (num >= 10 || num <= -1)
		return false; // for correct program without 10

	return num;
}

int main()
{
	here:
	vector<int> NumbersOfProg;
	vector<int> NumbersOfPlayer;
	int counter = 0; // for random nub
	int choice = 0;

	for (int i = 0; i < 4; i++) { // random numbers for rule game
		counter = randoms();
		NumbersOfProg.push_back(counter);
	}
	counter = 0;

	for (int i = 0; NumbersOfPlayer != NumbersOfProg;) {

		cout << "Enter your number (0 to 9) - ", cin >> choice;
		cout << endl;

			if (choice == NumbersOfProg[counter]) {
				cout << "Bull" << endl;
				NumbersOfPlayer.push_back(choice);
				counter++;
			}
			else
				cout << "Cow" << endl;

	}

	char Y_or_N; // Ask about next round
	cout << "Next round? (y/n) - ", cin >> Y_or_N;
	if (Y_or_N == 'y') {
		goto here;
	}
	else if (Y_or_N == 'n')
		return 0;
	else {
		cout << "Error, programm are stoping" << endl;
		return 0;
	}
}
