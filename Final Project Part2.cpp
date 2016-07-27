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
	
	
	//Begin reading text files
	ifstream fin;
   	fin.open(inputFile.c_str());
    if(!fin.good()) throw "I/O error"; // Place error check
 
	
	//Read length of lines in file
	string readFile;
	
	while(fin.good())
    {
        getline(fin, readFile);
        for(int i = 0; i < readFile.size() ;i++ ) // Read file lines
        {
            if (readFile.at(i) == '@')
				{
					cout<<readFile<<endl; // If line has '@' --> Print line
             	}

        } // End for - read file

    }// End while    
	
	
}