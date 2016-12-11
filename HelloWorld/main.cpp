#include <iostream>
#include <string>

using namespace std;
int main() {

	constexpr int WORD_LENGTH = 5;
	string Guess;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you the " << WORD_LENGTH  << " letter isogram I'm thinking of ?" << endl;
	
	cout << "Enter your Guess" << endl;
	getline(cin, Guess);
	cout << "your guess was - " << Guess << endl;

	cout << "Enter your Guess" << endl;
	getline(cin, Guess);
	cout << "your guess was - " << Guess << endl;

	cout << "Enter your Guess" << endl;
	getline(cin, Guess);
	cout << "your guess was - " << Guess << endl;

	cout << "Enter your Guess" << endl;
	getline(cin, Guess);
	cout << "your guess was - " << Guess << endl;

	
	return 0;
}