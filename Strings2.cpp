// Lab 7 (Part 2), Arrays and Vectors in C++
// Programmer: Melinda (Mel) Kwok
// Editor(s) used: Notepad++
// Compiler(s) used: Visual Studio

//This library is for the buffer
#include <cstdlib>

//This library is for getting inputs and outputting
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//This library is so the compiler can read strings
#include <string>

#include <algorithm> 
using std::swap;

//Prototype for Copy String Function
void myStrCpy(char*, const char*);

//Prototype for String Comparison Function
int myStrCmp(const char*, const char*);

//Prototype for String Swap Function
void myStrSwap(char*, char*);

//Prototype for Uppercase Conversion Function
void myStrUpr(char*);

//Prototype for Lowercase Conversion Function
void myStrLwr(char*);

//Start of Main Function
int main()
{
  //Print my name and this assignment's title 
  cout << "Lab 7 (Part 2), Arrays and Vectors in C++ \n";
  cout << "Programmer: Melinda Kwok \n";
  cout << "Editor(s) used: Notepad++ \n";
  cout << "Compiler(s) used: Visual Studio \n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  
  //Decalred varaibles!
  //All of them are just premade strings that we will be using for the whole function
  char a[100] = {"Hello World"};
  char b[100];
  char c[100] = {"Hello World"};
  char d[100] = {"Suhhh dude"};

  //This is calling the Copy Function into the Main Function
  //It is coping the string in array a and copying it into array b which is blank
  //It then outputs the results showing the original string and then it's copied version
  myStrCpy(b, a);
  cout << "Source string: " << a << endl;
  cout << "String copy: " << b << endl;
  cout << endl;
  cout << endl;
  
  //These are the Comparison Functions called back into the Main Function.  I have 2 to show that it works on both equal and not equal strings
  //I know it's suppose to return 1 or 0 but I thought it would be neater to have it the outcome statements in the Function and then just pull whichever one is correct here
  myStrCmp(a, c);
  myStrCmp(a, d);
  cout << endl;
  
  //This is for the String Swap Function
  //It shows the two strings that I chose to swap as they are and then afterwards shows them swapped
  cout << "String 1: " << c << endl;
  cout << "String 2: " << d << endl;
  cout << "SWAP!" << endl;
  
  myStrSwap(c, d);
  
  cout << "String 1: " << c << endl;
  cout << "String 2: " << d << endl;
  cout << endl;
  
  //This is for the Uppercase Function
  //It shows the original string and then the new version as it is made in all uppercase letters
  cout << "Original String: " << a << endl;
  myStrUpr(a);
  cout << "Uppercase Version: " << a << endl;
  cout << endl;
  
  //This is for the Lowercase Function
  //It shows the original string and then the new version as it is made in all lowercase letters
  cout << "Original String: " << b << endl;
  myStrLwr(b);
  cout << "Lowercase Version: " << b << endl;
  
  return 0;
  
}//End of Main Function


//Copy String Function
void myStrCpy (char b[], const char a[])
{
  //Variable i declared at 0
  int i = 0;
  
  //While loop is reading through the constant array a, which is given from the main function
  //If an element in array a isn't a null character, it will put that element into array b and increment i
  while (a[i] != '\0')
	{
	  b[i] = a[i];
	  i++;
	}
	
  //After everything has been put from array a into array b, it will have array equal a null character to end it
  //It is then sent back to the main function   
  b[i] = '\0';
}//End of Copy String Function


//String Comparison Function
int myStrCmp(const char* a, const char* b)
{
  //Declaring variables all as 0
  int i = 0;
  int check = 0;
  int compare = 0;
  
  //While loop - while both array and a by don't have a null character, run this
  //If array a doesn't equal array b, check = 1 and will end this loop and increment so that strings will be output
  while (a[i] != '\0' && b[i] != '\0')
    {
	  if (a[i] != b[i])
        {
	      check = 1;
		  break;
	    }
		
	  i++;
	}
  
  //If check is still 0 and array and b have null characters; compare will = 1 if not, compare will = 2
  //These numbers will be used to determine if the strings are equal or not
  if (check == 0 && a[i] == '\0' && b[i] == '\0')
    {
	  compare = 1;
	}

  else
    {
	  compare = 2;
	}	

  //These use the number received from compare. If comapare = 1, it will give an output statement saying the strings are the same
  //If it doesn't equal 1, then it will say that the strings aren't equal
  //The resulting cout statement from compare will be sent back to the Main Function and be outputted there.
  if (compare == 1)
    {
	  cout << a << " and " << b << " are both equal strings." << endl;
	}

  else 
    {
	  cout << a << " and " << b << " are not equal strings." << endl;
	}

}//End of String Comparison Function

//String Swap Function
void myStrSwap(char* a, char* b)
{ 
  /*Write a C function to swap the contents of two C strings, using this function prototype:
void myStrSwap(char*, char*);

Swap each char value in the parameter C strings until the null terminator of the longer string is swapped. 
Do not use <cstring>'s strlen(), strcmp(), or strcpy() functions in your program -- you are to write your function using loops to process the char arrays. 
Do not use pointers -- use array syntax instead. Do not use more than one loop in the function.*/

  int i = 0;

  while (i != '\0')
    {
	  swap(a[i], b[i]);
	  i++;
	}
  
}//End of String Swap Function

//Uppercase Conversion Function
void myStrUpr(char* a)
{
  int i = 0;
  while(a[i] != '\0')
    {
      a[i] = toupper(a[i]);
	  i++;
    }
}//End of Uppercase Conversion Function

//Lowercase Conversion Function
void myStrLwr(char* a)
{
  int i = 0;
  while(a[i] != '\0')
    {
      a[i] = tolower(a[i]);
	  i++;
    }
}//End of Lowercase Conversion Function

