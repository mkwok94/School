#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std; 


//Struct for Integers
struct Guess
	{
		int value; 
		Guess* next;
	};

	

int main()
{
	srand(time(0));

	int Awnser;
	int Guess;

	Awnser = 1 + (rand() % 10);
	
	//Empty List
	Guess* start = 0;
	
	cout << "Hey, I'm trying to think of a number between 1-10! Try and guess what it is: ";
	
	while (true)
	{ 
		//Create node
		Guess* aGuess = new Guess;
		
		//Read Guess
		cin >> aGuess->value;
		cin.ignore (1000, 10);
	
		//Add node to list
		aGuess->next = start;
		start = aGuess;
		
		Guess* p;
		
		
		//Traverse
		for (p=start; p; p -> next)
		{
			if (aGuess->value == p->value)
				{
					cout << "You already guessed " >> aGuess->value << "! Try again! ";
					break;
				}
		} // For
		
		//Anwser too high
		if (aGuess->value > a)
			{
				cout << "Boo, too high. Try again. ";
			}
		
		//Answer too low
		if (aGuess->value < a)
			{
				cout << "Awe, too low. Try again. ";
			}
		
		//Sentinal
		if (aGuess->value < 1 || aGuess->value > 10)
			{
				break;
			}
		
		//Correct Answer
		if (Awnser == Guess) 
		{
			cout << "You got it! The number I was thinking of was " << Awnser << "!" << endl;
			break;
		}
 
	}
 
}