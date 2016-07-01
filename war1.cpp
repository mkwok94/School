#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std; 

int main() {
  srand(time(0));

  int cSuit;
  int cCard;

  int hSuit;
  int hCard;
  

  cSuit = (rand() % 4);
  cCard = 2 +(rand() % 13); 


  hSuit = (rand() % 4);
  hCard = 2 +(rand() % 13);

  
  // COMPUTER HAND
  
  cout << "Computer has ";
  
  if (cCard == 11)
    cout << "Jack of ";
  
  if (cCard == 12)
    cout << "Queen of ";
    
  if (cCard == 13)
    cout << "King of ";
  
  if (cCard ==14)
    cout << "Ace of ";
  
  if (cCard < 11)
    cout << cCard << " of ";
  
  

  if (cSuit == 0)
    cout << "Spades.\n\n";

  if (cSuit == 1)
    cout << "Diamonds.\n\n";

  if (cSuit == 2)
    cout << "Hearts.\n\n";

  if (cSuit == 3)
    cout << "Clubs.\n\n";
  
  // HUMAN HAND
  
  cout << "You have ";
  
  if (hCard == 11)
    cout << "Jack of ";
  
  if (hCard == 12)
    cout << "Queen of ";
  
  if (hCard == 13)
    cout << "King of ";
  
  if (hCard == 14)
    cout << "Ace of ";
  
  if (hCard < 11)
    cout << hCard << " of ";
  
  
  if (hSuit == 0)
    cout << "Spades.\n\n";

  if (hSuit == 1)
    cout << "Diamonds.\n\n";

  if (hSuit == 2)
    cout << "Hearts.\n\n";
  
  if (hSuit == 3) 
    cout << "Clubs.\n\n";
  
  


  if (cCard == hCard)
    cout << "It's a draw!" << endl;

  if (cCard > hCard)
    cout << "Computer wins!" << endl;

  if (cCard < hCard)
    cout << "You win!" << endl;

}
