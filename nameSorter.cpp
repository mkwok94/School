#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userInput;

	//User Input
	cout << "Enter the name of the file containing names: ";
	getline(cin, userInput);
	
	// Open File
	ifstream fin;
	fin.open(userInput.c_str());
	if(!fin.good()) throw "I/O error";
	
	//Creating Empty List
	const int MAX_Names = 5; //Max
	int nNames = 0; // Intialize Empty List
	string name[MAX_Names];
	
	
	//Reading File
	
	while(fin.good())
		{ 
			string aNames;
			getline(fin, aNames);			
		
			string readFile;
			int i = 0;
		
			string aname = aNames;

			bool validation = true;
			if (nNames == MAX_Names) //If hits Max --> break
				{
					break;
				}
			
			for (i < nNames; i++;) //If Name is same --> false
				{
				
					if(aname.compare(name[i]) == 0) 
					{
						validation = false;
						break;
					}
				}
			
				
			if (aNames == "") //Ignore Blank Lines
				{
					validation = false;
				} 
				
			if (validation == true) //If true --> Print names
				{
					name[nNames] = aNames;
					nNames++;
				}				

		}// End While
		
	fin.close();	

	
	sort (name, name + MAX_Names);
	
	for (int i = 0; i < MAX_Names; i++)
		{
			cout << i+1<< ": " << name[i] << endl;
		}
}