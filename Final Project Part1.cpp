#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	string userInput; // User Input
	string inputFile;
	string defaultInput = "filecontainingEmails.txt"; // Default
	
	string userOutput; //User Output
	string outputFile;
	string defaultOutput = "copyPasteMyEmails.txt"; //Default

	//User put in Input	
	cout << "Enter input filename [default: " << defaultInput << "]: ";
	getline(cin, userInput);
	
	if (userInput == "")
		{
			inputFile = defaultInput; // Enter --> Default Input
		}
		
	else
		{
			inputFile = userInput; // Input --> User Input
			defaultOutput = userInput; //User input --> Default Output
		}
	
	//User put in Output	
	cout << "Enter output filename [default: " << defaultOutput << "]: ";
	getline(cin, userOutput);
	
	if (userOutput == "")
		{
			outputFile = defaultOutput; //If Enter --> Default
		}
	
	else
		{
			outputFile = userOutput; // Else it will be User Output
		}
	
	cout << endl;
	
	
	//Echo Lines
	cout << "Input file: " << inputFile << endl;
	cout << "Output file: " << outputFile << endl;
	
	
}