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
	int wins = 0;
	int losses = 0;

	do
	{
		//initializes the guess count, the random number, and try count variables
		int guess = 0;
		int num = 0;
		int tries = 0;
		srand(time(0)); //seed random number generator
		num = rand() % 100 + 1; // random number between 1 and 100
		cout << "Guess My Number Game\n\n";

		do
		{
			



			cout << num << endl;  //prints the number to guess for testing purposes, will be removed later

			cout << "Enter a guess between 1 and 100 : "; //inputs the guess
			cin >> guess;
			tries++; //adds to the try count
			
			//determine if the guess was correct, incorrect, or if you are out of tries
			if (guess != num && tries < 20)
				cout << getResponseIncorrect() << "\n\n";
			else if (guess == num && tries < 20)
			{
				cout << getResponseCorrect() << "\nYou got it in " << tries << " guesses!\n";
				wins = wins + 1;
			}
			else if (tries == 20)
			{
				cout << getResponseLose() << endl;
				losses = losses + 1;
			}

		} while (guess != num && tries <= 19);

		//determines if the user wants to play again or exit the game.
		cout << "Do you want to play again, enter 1 for yes, enter any other number for no: ";
		cin >> playAgain;
	} while (playAgain == 1);

	cout << endl << "WINS: " << wins << endl << "LOSSES: " << losses;

	return 0;
}

//gets the response for incorrect
string getResponseIncorrect()
{
	string response = "";
	int responseNum = rand() % 10 + 1; // random number between 1 and 10

	switch (responseNum)
	{
	case 1: response = "Nope";
		break;
	case 2: response = "Nada";
		break;
	case 3: response = "That aint it Chief";
		break;
	case 4: response = "Nerp";
		break;
	case 5: response = "Not Quite";
		break;
	case 6: response = "No";
		break;
	case 7: response = "Wrong";
		break;
	case 8: response = "Incorrect";
		break;
	case 9: response = "Wrongo";
		break;
	case 10: response = "You're Wrong";
		break;
	default:
		break;
	}

	return response;

}

//gets the response for correct
string getResponseCorrect()
{
	string response = "";
	int responseNum = rand() % 10 + 1; // random number between 1 and 10

	switch (responseNum)
	{
	case 1: response = "Correct!";
		break;
	case 2: response = "You got it!";
		break;
	case 3: response = "Thats it!";
		break;
	case 4: response = "Thats right!";
		break;
	case 5: response = "Yes";
		break;
	case 6: response = "You guessed correctly!";
		break;
	case 7: response = "Yes Sir!";
		break;
	case 8: response = "https://www.youtube.com/watch?v=OgZzUJud3Q4";
		break;
	case 9: response = "Good job Chief!";
		break;
	case 10: response = "Way to go Bossman";
		break;
	default:
		break;
	}

	return response;

}

//gets the response for lose
string getResponseLose()
{
	string response = "";
	int responseNum = rand() % 10 + 1; // random number between 1 and 10

	switch (responseNum)
	{
	case 1: response = "You Lose!";
		break;
	case 2: response = "Failed";
		break;
	case 3: response = "Failure";
		break;
	case 4: response = "Dumb Dumb";
		break;
	case 5: response = "You Failed to Guess the Number!";
		break;
	case 6: response = "*The Price is Right Failure soud*";
		break;
	case 7: response = "https://www.youtube.com/watch?v=OgZzUJud3Q4";
		break;
	case 8: response = "Your lack of correct guesses disturbs me";
		break;
	case 9: response = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
		break;
	case 10: response = "https://www.youtube.com/watch?v=_asNhzXq72w";
		break;
	default:
		break;
	}

	return response;
}