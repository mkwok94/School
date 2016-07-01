#include <ctime>
#include <cstdlib>
#include <iostream>

// Hi Melinda! I'm modifying your code. You can pull this change to your computer 
// Once I push this change to GitHub, you can pull it down to your own computer!
// NEW CHANGE!!!

using namespace std; 

int main()
{
srand(time(0));

int cSuit;
int cCard;
int cHand;

int hSuit;
int hCard;
int hHand;

cSuit = (rand() % 4);
cCard = 2 +(rand() % 14);
cHand = cSuit + cCard;

hSuit = (rand() % 4);
hCard = 2 +(rand() % 14);
hHand = hSuit + hCard;

while(true)
{
	if (cSuit == 0)
		cout << "Spades";
	if (cSuit == 1)
		cout << "Diamonds";
	if (cSuit == 2)
		cout << "Hearts";
	if (cSuit == 3)
		cout << "Clubs";
}
	
while(true)
{
	if (hSuit == 0)
		cout << "Spades";
	if (hSuit == 1)
		cout << "Diamonds";
	if (hSuit == 2)
		cout << "Hearts";
	if (hSuit == 3)
		cout << "Clubs";
}

while(true)
{
	if (cCard == 14)
		cout << "Ace";
	if (cCard == 13)
		cout << "King";
	if (cCard == 12)
		cout << "Queen";
	if (cCard == 11)
		cout << "Jack";
}

while(true)
{
	if (hCard == 14)
		cout << "Ace";
	if (hCard == 13)
		cout << "King";
	if (hCard == 12)
		cout << "Queen";
	if (hCard == 11)
		cout << "Jack";
}

while(true)	
 {
	if (cHand == hHand)
	cout << "It's a draw!" << endl;
	if (cHand > hHand)
	cout << "Computer wins!" << endl;
	
	if (cHand < hHand)
	cout << "You win!" << endl;
	
 }

}
