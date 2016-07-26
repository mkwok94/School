#include <fstream>
#include <iostream>
#include <cctype>

using namespace std;

bool validation(char c) // Checking for invalid characters
{
	if(toupper(c) >= 'A' && toupper(c) <= 'Z')
		{
			return true;
		}

	else if (c >= '0' && c <= '9')
		{
			return true;
		}

	else if (c == '_' || c == '-' || c == '.' || c == '+' || c == '@')
		{
			return true;
		}
	
	else
		{
			return false;
		}
}


int main()
{
	string userInput; // User Input
	string inputFile;
	string defaultInput = "filecontainingEmails.txt"; // Default
	
	string userOutput; //User Output
	string outputFile;
	string defaultOutput = "copyPasteMyEmails.txt";//Default

		
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
	
		
	cout << "Enter output filename [default: " << defaultOutput << "]: ";
	getline(cin, userOutput);
	
	if (userOutput == "")
		{
			outputFile = defaultOutput; // Enter --> Default Output
		}
	
	else
		{
			outputFile = userOutput; // Else Output is User Output
		}
	
	cout << endl;
	
	
	//Echo Lines
	cout << "Input file: " << inputFile << endl;
	cout << "Output file: " << outputFile << endl;
	
	//Begin reading text files
	ifstream fin;
   	fin.open(inputFile.c_str());
    if(!fin.good()) throw "I/O error";
    // Place error check
	
	
		
	//Read length of lines in file
	
	//START HERE: So we didn't really learn substrings but it makes the code work and was wondering if another way to pull the emails from the other text file.
	string readFile;
	
	while(fin.good())
    {
        getline(fin, readFile);
        for(int i = 0; i < readFile.size() ;i++ )
        {
            if (readFile.at(i) == '@') // Looking for @ in email names
				{
					int s, e, hasDot;
					
					for(s=i; validation(readFile.at(s)); s--);
					for(e=i; validation(readFile.at(e)); e++);
					
					if (readFile.at(e) == '.')
						{
							hasDot++;
						}
					
					if (readFile.at(e) >= 1)
						{
							cout << readFile.substr(s+1, e-s-1) << endl;
						}
					
             	} // End of Line Check

        } // End for - read file

    }// End while    
	
	
}