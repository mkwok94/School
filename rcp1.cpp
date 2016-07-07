#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std; 

int main() {
  srand(time(0));

  int Rock;
  int Paper;
  int Scissors;
  char r;
  char p;
  char s;
  char q;

  
  char hPick;
  int cPick;

  
  int cWins;
  cWins = 0; 
 
  int hWins;
  hWins = 0;

  int value = 0;


  while (true)
  {
	cout << "Rock, Paper, Scissors! Go!! [r for Rock, p for Paper, s for Scissors, and q to Quit]: ";
	cin >> hPick; 
	cin.ignore (1000,10);
	cout << endl;
	  
	  if (hPick == 'q') break;
  

  cPick = (rand() % 3);
  cPick = 1 + (rand() % 3);

  
  hWins = hWins + value;
  cWins = cWins + value;
  
  
  // COMPUTER GOT
  
  cout << "Computer picked: ";
  
  if (cPick == 1)
    cout << "Rock";
  
  if (cPick == 2)
    cout << "Paper";
    
  if (cPick == 3)
    cout << "Scissors";
  
  cout << endl;
  
  
  
  // YOUR PICK
  
  cout << "You picked: ";
  
  if (hPick == 'r')
	  cout << "Rock";

  if (hPick == 'p')
	  cout << "Paper";
  
  if (hPick == 's')
	  cout << "Scissors";

  cout << endl;


  // WHO WINS?!?!
  
  if (hPick == 'r' && cPick == 1 || hPick == 'p' && cPick == 2 || hPick == 's' && cPick == 3)
    cout << "It's a draw!\n" << endl;
  
  
  if (hPick == 'r' && cPick == 3 || hPick == 'p' && cPick == 1 || hPick == 's' && cPick == 2)
    {
    cout << "Winnerrrrrrrrrr! Great job.\n" << endl;
    hWins = hWins + 1;
	}
	
  if (cPick == 1 && hPick == 's' || cPick == 2 && hPick == 'r' || cPick == 3 && hPick == 'p')
	{
	cout << "Loserrrrrrrrrr! Try again if you want.\n" << endl;
    cWins = cWins +1;
	} 
} 

cout << "You won: " << hWins << endl;
cout << "Computer won: " << cWins << endl;

  
}
