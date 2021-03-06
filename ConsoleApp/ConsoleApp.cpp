// ConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int guess = NULL;
	int maxGuess = 5;
	
	srand(time(0));
	int randomNum = rand() % 100 + 1;
	cout << randomNum;
	cout << "The secret number has been generated. You have five guesses to identify it." << endl;

	while (maxGuess > 0 && guess != randomNum)
	{
		cout << "Please enter your guess: ";
		cin >> guess;

		if (guess > randomNum && guess < 100)
		{
			cout << "Your guess is incorrect, the secret number is lower. Please try again: " << endl;
			maxGuess--;
		}
		if (guess < randomNum && guess > 0)
		{
			cout << "Your guess is incorrect, the secret number is higher. Please try again: " << endl;
			maxGuess--;
		}
		if (guess > 100 || guess < 0)
		{
			cout << "The integer you have entered is out of bounds, please select an integer between 1 and 100." << endl;

		}
		
	}
	
	if (guess == randomNum)
		{
			cout << "Congratulations! You guessed correctly." << endl;
		}
	else if (maxGuess == 0 && guess != randomNum)
	{
		cout << "You have used up all your guesses, the secret number was: " << randomNum << endl;
	}
	
	system("pause");
    return 0;
}

