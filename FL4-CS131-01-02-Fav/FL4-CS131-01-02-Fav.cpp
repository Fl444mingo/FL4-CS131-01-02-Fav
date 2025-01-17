#include <iostream>
using namespace std;
int main()
{
	// Declare variables at the top of the program.
	// int for integers, char for a character, string for words and sentences
	int fav_number;
	// ask a question
	cout << "What is your favorate number? ";
	// get an answer, put it in a variable
	cin >> fav_number;
	// output text and the variable
	cout << "Your favorate number is ";
	cout << fav_number;
	cout << ".\n";
	// pause is useful to delay the exit message, keeping the console clean until you're ready to quit the program
	system("pause");
	return 0;
}