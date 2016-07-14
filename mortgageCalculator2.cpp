#include <iostream> 
#include <string> 
#include <cmath>
using namespace std; 

int getPassword() 
{ 
	int i;
	i = 0;

	while (i != 3)
	{ 
		string password; 
		cout << "Enter the password: "; 
		getline(cin, password); 
  
		if (password == "12345") return 0; 
			
		else
			cout << "INVALID. \n\n"; 
		
		i = i + 1;
	} // while 
	
	return 1;
} // getPassword 


  
int main() 
{
getPassword();

int i;
i = 0;

while (true)
	if (i == 3) break;

	int borrowed;
	double rate; 	
	
	cout << endl;
	cout << endl;
	cout << "What's the amount borrowed: ";
	cin >> borrowed;

	
	cout << "What's the annual interest rate: ";
	cin >> rate;
	cout << endl;
	cout << endl;
	
	double mortgage;
	double r = (rate/100) / 12;
	int payback = 30;
	int n = payback * 12;
	
	mortgage = (borrowed * pow(1+r, n) * r)/( pow(1+r, n) - 1);
	
	cout << "Amount borrowed: " << borrowed << endl;
	cout << "Annual interest rate: " << rate << endl;
	cout << "Payback period: " << payback << " years" << endl;
	cout << "Monthly payback: $" << mortgage << endl;
	

	
	}