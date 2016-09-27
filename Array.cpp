// Lab 6, Arrays and Vectors in C++
// Programmer: Melinda (Mel) Kwok
// Editor(s) used: Notepad++
// Compiler(s) used: Visual Studio

//This library is for the buffer
#include <cstdlib>

//This library is for set precision 
#include <iomanip>
using std::setprecision;

//This library is for getting inputs and outputting
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

//This library is so the compiler can read strings
#include <string>
using std::string;

//Prototype
int readArray(int, int[]);

//Prototype
double getAverage(int, int[], int);

//Prototype
int stat(int, int[], int&, int&, int&);

int main()
{
  //Print my name and this assignment's title 
  cout << "Lab 6, Arrays and Vectors in C++ \n";
  cout << "Programmer: Melinda Kwok \n";
  cout << "Editor(s) used: Notepad++ \n";
  cout << "Compiler(s) used: Visual Studio \n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  
  //Max # of scores that user can enter
  const int MAX_SCORE = 10;
  //Create storage for up to 10 scores
  int score[MAX_SCORE];
  //Count number of scores entered
  int nScores = 0;
  
  char bufscore[100];
  
  string bye;
  
  cout << "Enter up to 50 numbers to be stored! If you wanna quit, type Q or q at any time! ";

  //Says how many scores were entered
  int valid_numbers = readArray(MAX_SCORE, score);
  cout << "The number of scores entered was " << valid_numbers << endl;
  
  int minScore = 0;
  int maxScore = 0;
  int avgScore = 0;
  
  int returnValue = stat(valid_numbers, score, minScore, maxScore, avgScore);
  cout << "Min score: " << minScore << endl;
  cout << "Max score: " << maxScore << endl;
  cout << "Avg score: " << avgScore << endl;

  //if (stat(nScores, score, minScore, maxScore, avgScore) ==0)
  //  {
	//  cout << "Minimum: " << minScore << endl;
	//  cout << "Maximum: " << maxScore << endl;
	//  cout << "Average Score: " << avgScore << endl;
  //  }

  //else
  //  {
	//	cout << "No data can be found";
	//}
  
  
  //cout << "The average of the scores entered was " << getAverage(MAX_SCORE, score, valid_numbers) << endl;
  //cout << "The min score was " << getMin(MAX_SCORE, score) << endl;
  //cout << "The max score was " << getMax(MAX_SCORE, score) << endl;
  //cout.setf(ios::fixed|ios::showpoint);
  //cout << setprecision(1);
  //cout << getAverage(MAX_SCORE, score) << endl;
 }
 
int readArray (int MAX_SCORE, int score[])
 {
	int nScores = 0;
	char bufscore[100];
  
    string bye;
    //Read scores from keyboard, space and/or newline delimited
    for (int i = 0; i < MAX_SCORE; i++)
    {
	  cin >> bufscore;
	  score[i]= atoi(bufscore);
	  
	  //String quit will be stored in the array; this is so that we have an option to quit the program  
      bye = bufscore;
	  
	  //If user input matches with strings options for quitting, program will end immiediately
	  if (bye == "Q" || bye == "q")
	    {
		  break;
	    }
	  
	  if (score[i] >= 0 && score[i] < 101)
	    {
		  //Counts score if it is non-negative
		  nScores++;
		}
    }
	return nScores;
 }

double getAverage(int max_scores, int scores[], int valid_numbers)
{
  double result = 0;
  double sum = 0;
  int nScores = 0;
		
  for (int i = 0; i < max_scores; i++)
	{
	  if (scores[i] >= 0 && scores[i] < 101)
	    {
        sum += scores[i];
		  }
	}

  if (sum == 0) {
    return 0;
  }
		
  result = sum / valid_numbers;
  return result;
  
}

int stat(int nScores, int scores[], int &min, int &max, int &avg) 
{
  min = 1; // write code to set min to the actual min


  max = 2;  // write code to set max to the actual max
  

  avg = 3; // write code to seet avg to the actual avg

  return 0;
}