
#include <cstdlib>
#include <iostream> 
#include <string> 
#include <cmath> 
using namespace std;

// Decimals are represented as ints 
// binary numbers are represented as strings (e.g., "1010") 
// hexadecimal numbers are represented as strings (e.g., "A1B")
// the bintodec, hextodec, dectobin, and dectohex functions work on SIGNED numbers

int bintodec(string); // converts a binary number (represented as a STRING) to decimal 
int hextodec(string);  // converts a hexadecimal number (represented as a STRING) to decimal 
string dectobin(int);  // converts a decimal number to binary (represted as a STRING) 
string dectohex(int);   // converts a decimal number to hexadecimal (represted as a STRING)

//the addbin and addhex functions work on UNsigned numbers

string addbin(string, string);  // adds two binary numbers together (represented as STRINGS) 
string addhex(string, string); // adds two hexadecimal numbers together (represented as STRINGS)

int main() 
{ 

  cout << "SIGNED binary 10011 = SIGNED decimal " << bintodec("10011") << endl;
  cout << "SIGNED binary 01110 = SIGNED decimal " << bintodec("01110") << endl << endl;
  
  cout << "SIGNED hexadecimal A1 = SIGNED decimal " << hextodec("A1") << endl; 
  cout << "SIGNED hexadecimal 3C = SIGNED decimal " << hextodec("3C") << endl << endl;
  
  cout << "SIGNED decimal 25 = SIGNED binary " << dectobin(25) << endl; 
  cout << "SIGNED decimal -18 = SIGNED binary " << dectobin(-18) << endl << endl;
  
  cout << "SIGNED decimal 28  = SIGNED hexadecimal " << dectohex(28) << endl; 
  cout << "SIGNED decimal -15  = SIGNED hexadecimal " << dectohex(-15) << endl << endl;
  
  cout<<"binary 1101 + 1000 = "<< addbin("1101", "1000") << endl; 
  cout<<"binary 11000 + 1011 = "<< addbin("11000", "1011") << endl << endl;
  
  cout<<"hexadecimal A4 + A5 =  "<<addhex("A4", "A5")<<endl; 
  cout<<"hexadecimal 2B + C = "<<addhex("2B", "C")<<endl<<endl;

  system("PAUSE");
  return 0;
}

//Binary to Signed Decimal Function
int bintodec(string bin) 
{ 
  //Declaring a variable called decimal, the value of decimal will change through out the function and be returned at the very end
  //Starting value will be 0
  int decimal = 0;
  
  //If the first element in the string is a 1, this means the decimal will be a negative
  //Decimal will equal the negative power of 2 to the strings length - 1 since the highest power is always one less then the string length
  if  (bin[0] == '1')
	{
	  decimal = -pow(2, bin.length()-1);
	}

  //For loop!  Will start at the second element of the string and keep going until it hits the end of the string's size
  //Adding in decimal from the previous equation, it will check if there are any 1s in the string and perform the new equation
  //The new equation: power of 2 to the string length -1 - whatever element the loop is on
  //This ensures its not always going to the same power but going down in power as the loop iterates onto higher elements in the string
  for (int i = 1; i < bin.size(); i++)
    {
	  if(bin[i] == '1')
	    {
		  decimal += pow(2, bin.length()-1-i);
	    }	
	}
	
  return decimal;
}//End of Binary to Decimal Function

//Hexadecimal to Decimal Function 
//Its not the most practical way but I couldn't figure out how to do it directly from hex to dec so i did hex -> bin -> dec
int hextodec(string hex) 
{
	int decimal;
	
	string bin = "";
	
	for (int i = 0; i < hex.length (); i++)
	{
	switch (hex [i])
	  {
	    case '0': 
		  {
			bin = bin + "0000"; 
			break;
		  }
		
		case '1': 
		  {
			bin = bin + "0001"; 
			break;
		  }
		
		case '2': 
		  {
			bin = bin +"0010"; 
			break;
		  }
		
		case '3': 
		  {
			bin = bin + "0011"; 
			break;
		  }
		
		case '4': 
		  {
			bin = bin + "0100"; 
			break;
		  }
		
		case '5': 
		  {
			bin = bin + "0101"; 
			break;
		  }
		
		case '6': 
		  {
			bin = bin + "0110"; 
			break;
		  }
		
		case '7': 
		  {
			bin = bin + "0111"; 
			break;
		  }
		
		case '8': 
		  {
			bin = bin + "1000"; 
			break;
		  }
		  
		case '9': 
		  {
			bin = bin + "1001"; 
			break;
		  }  
		
		case 'A': 
		  {
			bin = bin + "1010"; 
			break;
		  }
		  
		case 'B': 
		  {
			bin = bin + "1011"; 
			break;
		  }
		
		case 'C': 
		  {
			bin = bin + "1100"; 
			break;
		  }
		
		case 'D': 
		  {
			bin = bin + "1101"; 
			break;
		  }
		
		case 'E': 
		  {
			bin = bin +"1110"; 
			break;
		  }
		  
		case 'F': 
		  {
			bin = bin + "1111"; 
			break;
		  }
	  }
	}
	
	if  (bin[0] == '1')
	{
	  decimal = -pow(2, bin.length()-1);
	}

	
	for (int i = 1; i < bin.size(); i++)
    {
	  if(bin[i] == '1')
	    {
		  decimal += pow(2, bin.length()-1-i);
	    }	
	}
	
	return decimal;
}//End of Hexadecimal to Decimal Function

//Decimal toBinary Function!
string dectobin (int dec) 
{
  //If the intial decimal given is a 0, it will return 0
  if ( dec == 0 ) 
    {
	  return "0";
	}

  //If the intial decimal given is a 1, it will return a 1
  if ( dec == 1 ) 
    {
	  return "1";
	}

  //If the intial decimal given is more than 1, it will perform modulus and if it = 0, it will redo the whole function while adding 0 to its output
  if ( dec % 2 == 0 )
    {
	  return dectobin(dec / 2) + "0";
	}

  //If you get 1 after modulus and then some, it will still redo the whole function while adding 1 to its return value
  else
    {
	  return dectobin(dec / 2) + "1";
	}
}//End of Decimal to Binary Function


//PROBLEM FUNCTION//
//Okay, so For the first test case in the main function this works fine, its just struggling when you do a negative decimal
//It does everything but when you convert negative decimals to hexadecimals, you need to add 1 after it's all done for it to be right
//Can't find the right spot to do it so technically the answer is wrong.
//-18 should translate to F1 but I can't get it to do that for some reason
//This is also I think why its screwing with my hexadecimal addition function at the 

//Decimal to Hexadecimal Function!
string dectohex(int dec) 
{
  string s = "";
  int rem;
  int negdec;

  while (dec < 0)
    {
	  dec = abs(dec);
	}  
	
  while (dec > 0)
    {
	  rem = dec % 16;
	  
	  if (rem > 9)
	    {
		  switch (rem)
		    {
			  case 10: 
			    {
				  s = "A" + s;
			      break;
				}
			
			  case 11:
			    {
				  s = "B" + s;
			      break;
			    }
			  
			  case 12:
			    {
				  s = "C" + s;
			      break;
			    }
				
			  case 13:
			    {
				  s = "D" + s;
			      break;
			    }
				
			  case 14:
			    {
				  s = "E" + s;
			      break;
			    }
				
			  case 15:
			    {
				  s = "F" + s;
			      break;
			    }
			}
		}
	
	  else
	    {
		  s = char(rem+48) + s;
	    }
		
	  dec = dec/16;
	}

	return s;
}//To Hex*/

//Binary Additoin Function
string addbin(string bin1, string bin2) 
{
  //Create empty string to put result in
  string result = "";
  
  //Decalring the sum as 0 for now
  int sum = 0; 
  
  // Traverse both strings starting from last characters
  int i = bin1.size() - 1;
  int j = bin2.size() - 1;
	
  //Will iterate through the strings until the conditions are no longer met
  while (i >= 0 || j >= 0 || sum == 1)
    {
      // Add the sums of the 2 numbers and carry over if necessary
      sum += ((i >= 0)? bin1[i] - '0': 0);
      sum += ((j >= 0)? bin2[j] - '0': 0);
 
      // If current sum is 1 or 3 will add 1 to result
      result = char(sum % 2 + '0') + result;
 
      //Does the carry over math
      sum /= 2;
 
      //Moves onto the next digits
      i--; 
	  j--;
    }

  return result;
}//End of Binary Additon Function

string addhex(string hex1, string hex2) 
{
   string bin1 = "";
   string bin2 = "";
	
	for (int i = 0; i < hex1.length (); i++)
	{
	switch (hex1 [i])
	  {
	    case '0': 
		  {
			bin1 = bin1 + "0000"; 
			break;
		  }
		
		case '1': 
		  {
			bin1 = bin1 + "0001"; 
			break;
		  }
		
		case '2': 
		  {
			bin1 = bin1 +"0010"; 
			break;
		  }
		
		case '3': 
		  {
			bin1 = bin1 + "0011"; 
			break;
		  }
		
		case '4': 
		  {
			bin1 = bin1 + "0100"; 
			break;
		  }
		
		case '5': 
		  {
			bin1 = bin1 + "0101"; 
			break;
		  }
		
		case '6': 
		  {
			bin1 = bin1 + "0110"; 
			break;
		  }
		
		case '7': 
		  {
			bin1 = bin1 + "0111"; 
			break;
		  }
		
		case '8': 
		  {
			bin1 = bin1 + "1000"; 
			break;
		  }
		  
		case '9': 
		  {
			bin1 = bin1 + "1001"; 
			break;
		  }  
		
		case 'A': 
		  {
			bin1 = bin1 + "1010"; 
			break;
		  }
		  
		case 'B': 
		  {
			bin1 = bin1 + "1011"; 
			break;
		  }
		
		case 'C': 
		  {
			bin1 = bin1 + "1100"; 
			break;
		  }
		
		case 'D': 
		  {
			bin1 = bin1 + "1101"; 
			break;
		  }
		
		case 'E': 
		  {
			bin1 = bin1 +"1110"; 
			break;
		  }
		  
		case 'F': 
		  {
			bin1 = bin1 + "1111"; 
			break;
		  }
	  }
	}
	
	for (int i = 0; i < hex2.length (); i++)
	{
	switch (hex2 [i])
	  {
	    case '0': 
		  {
			bin2 = bin2 + "0000"; 
			break;
		  }
		
		case '1': 
		  {
			bin2 = bin2 + "0001"; 
			break;
		  }
		
		case '2': 
		  {
			bin2 = bin2 +"0010"; 
			break;
		  }
		
		case '3': 
		  {
			bin2 = bin2 + "0011"; 
			break;
		  }
		
		case '4': 
		  {
			bin2 = bin2 + "0100"; 
			break;
		  }
		
		case '5': 
		  {
			bin2 = bin2 + "0101"; 
			break;
		  }
		
		case '6': 
		  {
			bin2 = bin2 + "0110"; 
			break;
		  }
		
		case '7': 
		  {
			bin2 = bin2 + "0111"; 
			break;
		  }
		
		case '8': 
		  {
			bin2 = bin2 + "1000"; 
			break;
		  }
		  
		case '9': 
		  {
			bin2 = bin2 + "1001"; 
			break;
		  }  
		
		case 'A': 
		  {
			bin2 = bin2 + "1010"; 
			break;
		  }
		  
		case 'B': 
		  {
			bin2 = bin2 + "1011"; 
			break;
		  }
		
		case 'C': 
		  {
			bin2 = bin2 + "1100"; 
			break;
		  }
		
		case 'D': 
		  {
			bin2 = bin2 + "1101"; 
			break;
		  }
		
		case 'E': 
		  {
			bin2 = bin2 +"1110"; 
			break;
		  }
		  
		case 'F': 
		  {
			bin2 = bin2 + "1111"; 
			break;
		  }
	  }
	}

	return dectohex(bintodec(addbin(bin1, bin2)));
}

//http://www.cplusplus.com/forum/beginner/112423/
//http://stackoverflow.com/questions/27460677/convert-negative-decimal-number-to-binary-number
//http://stackoverflow.com/questions/8222127/changing-integer-to-binary-string-of-digits