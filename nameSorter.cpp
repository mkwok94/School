#include <algorithm>
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
	
	int i;	
	while(fin.good())
		{ 
			string aName;
			getline(fin, aName);			
		
			string readFile;
		
			bool validation = false;
			for (i = 0; i < readFile.size() ;i++)
				{
					if (name[i] != aName && name[i] != "")
						{
							validation = true;
						}
				
				}
			if (aName.length() == 0) //Ignore Blank Lines
				{
					name[nNames] = aName;
				} 
				
			for (i = 0;  i < nNames; i++) // If Whitespace
				{  
					if (aName == name[i])
						{
							name[nNames--] = aName;
						}
				} 
				
										
			if (nNames < MAX_Names) //Nubmer of names to max
				{
					name[nNames++] = aName;
				}		
		}// End While
		
	fin.close();	

	
	sort (name, name + MAX_Names);
	
	for (i = 0; i < MAX_Names; i++)
		{
			cout << name[i] << endl;
		}
}