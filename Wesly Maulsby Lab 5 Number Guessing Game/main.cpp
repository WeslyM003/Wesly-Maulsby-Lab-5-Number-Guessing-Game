#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



void getResponseIncorrect();
void getResponseCorrect();
void getResponseLose();


int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Guess My Number Game\n\n";

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess != num)
			cout << getResponseIncorrect() << "\n\n";
		else if (guess == num)
			cout << getResponseCorrect() << "\nYou got it in " << tries << " guesses!\n";
		else if (tries == 20)
			cout << getResponseLose;
	} while (guess != num);

	return 0;
}

void getResponseIncorrect()
{
	string response = "";
	srand(time(0)); //seed random number generator
	int responseNum = rand() % 10 + 1; // random number between 1 and 10

	if (responseNum == 1)
		response = "Nope";
	else if (responseNum == 2)
		response = "Nada";
	else if (responseNum == 3)
		response = "That aint it Chief";
	else if (responseNum == 4)
		response = "Not Quite";
	else if (responseNum == 5)
		response = "No";
	else if (responseNum == 6)
		response = "Wrong";
	else if (responseNum == 7)
		response = "Incorrect";
	else if (responseNum == 8)
		response = "Wrongo";
	else if (responseNum == 9)
		response = "You're Wrong";
	else if (responseNum == 10)
		response = "Nerp";

	return response;

}

void getResponseCorrect()
{
	string response = "";
	srand(time(0)); //seed random number generator
	int responseNum = rand() % 10 + 1; // random number between 1 and 10

	if (responseNum == 1)
		response = "Correct!";
	else if (responseNum == 2)
		response = "You got it!";
	else if (responseNum == 3)
		response = "Thats it!";
	else if (responseNum == 4)
		response = "Thats right!";
	else if (responseNum == 5)
		response = "Yes";
	else if (responseNum == 6)
		response = "You guessed correctly!";
	else if (responseNum == 7)
		response = "Yes Sir!";
	else if (responseNum == 8)
		response = "You're right!";
	else if (responseNum == 9)
		response = "Good job Chief!";
	else if (responseNum == 10)
		response = "Way to go Bossman";

	return response;

}

void getResponseLose()
{
	string response = "";
	srand(time(0)); //seed random number generator
	int responseNum = rand() % 10 + 1; // random number between 1 and 10

	if (responseNum == 1)
		response = "You Lose!";
	else if (responseNum == 2)
		response = "Failed";
	else if (responseNum == 3)
		response = "Failure";
	else if (responseNum == 4)
		response = "Dumb Dumb";
	else if (responseNum == 5)
		response = "You Failed to Guess the Number!";
	else if (responseNum == 6)
		response = "*The Price is Right Failure soud*";
	else if (responseNum == 7)
		response = "Whelp, you tried!";
	else if (responseNum == 8)
		response = "Your lack of correct guesses disturbs me";
	else if (responseNum == 9)
		response = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
	else if (responseNum == 10)
		response = "https://www.youtube.com/watch?v=_asNhzXq72w";

	return response;

}