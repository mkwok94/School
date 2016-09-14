// Lab 4c, Basics of C and C++ Functions
// Programmer: Melinda (Mel) Kwok
// Editor(s) used: Notepad++
// Compiler(s) used: Visual Studio

//This library is for the buffer
#include <cstdlib>

//This library is for the random nubmer generator
#include <ctime>

//This library is so the compiler can read strings
#include <string>
using std::string;

//This libary is for inputting and outputting
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool YesORNo ()
{
	char Response;	
	
		while(true)
		{
			cout << "Do you want to play again? (Y or N): ";
			cin >> Response;
			cin.ignore (1000,10);
	
	
			if (Response == 'N' || Response == 'n')
				{
					return false;
				}
	
			else if (Response == 'Y' || Response == 'y') 
				{
					return true;
				}
	
			else cout << "Invalid. \n"; 
		}
		
} // YesORNo

int main()
{
  srand(time(0));
  int compAnswer;
  compAnswer = 1 + (rand() % 100);

  //Print my name and this assignment's title 
  cout << "Lab 4c, Basics of C and C++ Functions \n";
  cout << "Programmer: Melinda Kwok \n";
  cout << "Editor(s) used: Notepad++ \n";
  cout << "Compiler(s) used: Visual Studio \n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  
  int Guess;
  char number[100];
  string quit;

  cout << "Hey, I'm trying to think of a number between 1-100! Try and guess what it is: ";
  
  while (true)
  {	
    cin >> number;
	Guess = atoi(number);
    cin.ignore (1000, 10);
 
	//String quit will be stored in the array; this is so that we have an option to quit the program  
    quit = number;
    
	//If user input matches with strings options for quitting, program will end immiediately
	if (quit == "Q" || quit == "q")
	  {
		break;
	  }
	
	if (Guess > 100 || Guess < 1) 
	  {
		cout << "Your guess isn't between 1-100!!!";
		continue;
	  }
 
	if (Guess > compAnswer)
	{
		cout << "Boo, too high. Try again. ";
	}
	
	if (Guess < compAnswer)
	{
		cout << "Awe, too low. Try again. ";
	}
	
	if (compAnswer == Guess) 
	{
		cout << "You got it! The number I was thinking of was " << compAnswer << "!" << endl;
		cout << endl;
		
		if (!YesORNo())
			{
				return 0;
			}
	
	}
		
 }// While true

 
}