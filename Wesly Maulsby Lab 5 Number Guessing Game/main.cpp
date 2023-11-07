/***************************
Wesly Maulsby
C++ Fall 2022
Lab 5
Number Guessing Game
Create a number guessing game
*****************************/

#include <iostream>

#include <cstdlib>

#include <ctime>
using namespace std;


//creates the functions that give the responses
string getResponseIncorrect();
string getResponseCorrect();
string getResponseLose();

//creates the variable of if the game continues or not.
string playAgain;

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

			if (guess >= 1 && guess <= 100)
			{
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
			}
			else
			{
				cout << "Guess is not in range";
			}

		} while (guess != num && tries <= 19);

		//determines if the user wants to play again or exit the game.
		cout << "Do you want to play again (Y/N): ";
		cin >> playAgain;
	} while (playAgain == "y");

	//prints the wins and losses
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
	case 1: response = "Sorry, that's not the number. Try again!";
		break;
	case 2: response = "Not quite right. Keep guessing!";
		break;
	case 3: response = "Nope, the number is different.";
		break;
	case 4: response = "Incorrect! Give it another shot.";
		break;
	case 5: response = "Wrong number, but don't give up!";
		break;
	case 6: response = "You're not there yet. Keep guessing!";
		break;
	case 7: response = "It's not the number we're looking for.";
		break;
	case 8: response = "Oops, that's not it. Try a different number.";
		break;
	case 9: response = "You missed it this time, but keep trying!";
		break;
	case 10: response = "Incorrect guess, but keep going until you find it!";
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
	case 1: response = "Congratulations! You're the champion!";
		break;
	case 2: response = "Well done! You've emerged victorious.";
		break;
	case 3: response = "You've nailed it! You're the winner!";
		break;
	case 4: response = "Bravo! Your skills have paid off.";
		break;
	case 5: response = "Victory is yours! Great job!";
		break;
	case 6: response = "You've conquered the game - a true triumph!";
		break;
	case 7: response = "Outstanding! You're the reigning champion.";
		break;
	case 8: response = "Way to go! You've secured the win.";
		break;
	case 9: response = "You've proven your mastery in this game. Celebrate your success!";
		break;
	case 10: response = "In the grand scheme of the universe, winning a simple number guessing game appears as a rather trivial and insignificant endeavor.The cosmos is an unfathomably vast and ancient entity, teeming with galaxies, stars, and incomprehensible cosmic forces.Our lives, spanning a mere blip in the timeline of the universe, seem minuscule in comparison. Engaging in a number guessing game may momentarily entertain us, but when we contemplate the sheer scaleand age of the cosmos, it becomes evident that such activities are a fleeting distraction.Our universe, subject to the inexorable march of time, is marked by the birthand death of stars, the expansion of galaxies, and the unforgiving pull of entropy.In this cosmic context, winning a game hardly registers as a meaningful pursuit. While these games may offer temporary joyand camaraderie, they remind us of the transient nature of our existenceand encourage reflection on how we choose to allocate our timeand energy in a universe that operates on a scale beyond our comprehension.";
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
	case 1: response = "Tough luck, better luck next time!";
		break;
	case 2: response = "You gave it your best shot, but this time it wasn't meant to be.";
		break;
	case 3: response = "Don't worry, losing is just a part of the game.";
		break;
	case 4: response = "It happens to the best of us. Keep practicing!";
		break;
	case 5: response = "Chin up, losing is a stepping stone to winning.";
		break;
	case 6: response = "As we contemplate the distant future, we confront the chilling idea that the cosmos, once teeming with vibrant galaxies and stars, will eventually descend into an eternal, frigid abyss. In this scenario, entropy reigns supreme, and the universe succumbs to a state of uniform, lifeless equilibrium. The thought of all energy dissipating and matter becoming inert prompts a fundamental questioning of our existence and the significance of our endeavors. It highlights the fleeting nature of our lives and accomplishments in the grand scheme of the universe. This existential dread, born from the contemplation of the heat death, serves as a reminder of our vulnerability in the face of cosmic inevitabilities, compelling us to ponder our place in an unfathomably vast and indifferent universe.";
		break;
	case 7: response = "You'll bounce back stronger from this defeat.";
		break;
	case 8: response = "Remember, it's all about the experience, not just the win.";
		break;
	case 9: response = "In the grand scheme of things, it's just a game. Enjoy the process!";
		break;
	case 10: response = "Losing is a chance to learn and grow for the next round.";
		break;
	default:
		break;
	}

	return response;
}