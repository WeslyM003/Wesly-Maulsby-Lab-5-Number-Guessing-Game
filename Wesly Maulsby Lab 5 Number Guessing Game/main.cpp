#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//creates the functions that give the responses
string getResponseIncorrect();
string getResponseCorrect();
string getResponseLose();

//creates the variable of if the game continues or not.
int playAgain;

int main()
{

	do
	{
		//initializes the guess count, the random number, and try count variables
		int guess = 0;
		int num = 0;
		int tries = 0;

		do
		{
			
			int num, guess, tries = 0;	//im actually not sure why this is here, the internet told me to do this but??
			srand(time(0)); //seed random number generator
			num = rand() % 100 + 1; // random number between 1 and 100
			cout << "Guess My Number Game\n\n";

			cout << num << endl;  //prints the number to guess for testing purposes, will be removed later

			cout << "Enter a guess between 1 and 100 : "; //inputs the guess
			cin >> guess;
			tries++; //adds to the try count
			
			//determine if the guess was correct, incorrect, or if you are out of tries
			if (guess != num && tries < 20)
				cout << getResponseIncorrect() << "\n\n";
			else if (guess == num && tries < 20)
				cout << getResponseCorrect() << "\nYou got it in " << tries << " guesses!\n";
			else if (tries == 20)
				cout << getResponseLose();

		} while (guess != num && tries <= 20);

		//determines if the user wants to play again or exit the game.
		cout << "Do you want to play again, enter 1 for yes, enter any other number for no: ";
		cin >> playAgain;
	} while (playAgain == 1);


	return 0;
}

//gets the response for incorrect
string getResponseIncorrect()
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

//gets the response for correct
string getResponseCorrect()
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
		response = "https://www.youtube.com/watch?v=OgZzUJud3Q4";
	else if (responseNum == 9)
		response = "Good job Chief!";
	else if (responseNum == 10)
		response = "Way to go Bossman";

	return response;

}

//gets the response for lose
string getResponseLose()
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
		response = "https://www.youtube.com/watch?v=OgZzUJud3Q4";
	else if (responseNum == 8)
		response = "Your lack of correct guesses disturbs me";
	else if (responseNum == 9)
		response = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
	else if (responseNum == 10)
		response = "https://www.youtube.com/watch?v=_asNhzXq72w";

	return response;

}