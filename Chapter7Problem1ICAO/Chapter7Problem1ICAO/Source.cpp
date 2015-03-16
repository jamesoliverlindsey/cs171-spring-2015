//James Lindsey
//Chapter 7 programing problems 1
//march 3rd 2015
//this program outputs words from the ICAO alphabet and makes a transcript from an inputed word.
//csci 171


//naming libraries I will be needing
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declaring variables
	string iInput;
	string sOutput;
	int iInterger;
	int iLength;
	
	//asking the user to give me a string and storing it
		cout << "Enter string: " << endl;
		getline(cin, iInput);
		iLength = iInput.length();

		// deciding where to count the given strin so I can corolate a word below with each letter
		for (int i = 0; i < iLength; i++)
		{ 
			switch (iInput.at(i)) 
		{
			case 'a':
				sOutput = "Alpha ";
				break;
			case 'b':
				sOutput = "Bravo ";
				break;
			case 'c':
				sOutput = "Charlie ";
				break;
			case 'd':
				sOutput = "Delta ";
				break;
			case 'e':
				sOutput = "Echo ";
				break;
			case 'f':
				sOutput = "Foxtrot ";
				break;
			case 'g':
				sOutput = "Golf ";
				break;
			case 'h':
				sOutput = "Hotel ";
				break;
			case 'i':
				sOutput = "India ";
				break;
			case 'j':
				sOutput = "Juliet ";
				break;
			case 'k':
				sOutput = "Kilo ";
				break;
			case 'l':
				sOutput = "Lima ";
				break;
			case 'm':
				sOutput = "Mike ";
				break;
			case 'n':
				sOutput = "November ";
				break;
			case 'o':
				sOutput = "Oscar ";
				break;
			case 'p':
				sOutput = "Papa ";
				break;
			case 'q':
				sOutput = "Quebec ";
				break;
			case 'r':
				sOutput = "Romeo ";
				break;
			case 's':
				sOutput = "Sierra ";
				break;
			case 't':
				sOutput = "Tango ";
				break;
			case 'u':
				sOutput = "Uniform ";
				break;
			case 'v':
				sOutput = "Victor ";
				break;
			case 'w':
				sOutput = "Wiskey ";
				break;
			case 'x':
				sOutput = "X-ray ";
				break;
			case 'y':
				sOutput = "Yankee ";
				break;
			case 'z':
				sOutput = "Zulu ";
				break;
			case 'A':
				sOutput = "Alpha ";
				break;
			case 'B':
				sOutput = "Bravo ";
				break;
			case 'C':
				sOutput = "Charlie ";
				break;
			case 'D':
				sOutput = "Delta ";
				break;
			case 'E':
				sOutput = "Echo ";
				break;
			case 'F':
				sOutput = "Foxtrot ";
				break;
			case 'G':
				sOutput = "Golf ";
				break;
			case 'H':
				sOutput = "Hotel ";
				break;
			case 'I':
				sOutput = "India ";
				break;
			case 'J':
				sOutput = "Juliet ";
				break;
			case 'K':
				sOutput = "Kilo ";
				break;
			case 'L':
				sOutput = "Lima ";
				break;
			case 'M':
				sOutput = "Mike ";
				break;
			case 'N':
				sOutput = "November ";
				break;
			case 'O':
				sOutput = "Oscar ";
				break;
			case 'P':
				sOutput = "Papa ";
				break;
			case 'Q':
				sOutput = "Quebec ";
				break;
			case 'R':
				sOutput = "Romeo ";
				break;
			case 'S':
				sOutput = "Sierra ";
				break;
			case 'T':
				sOutput = "Tango ";
				break;
			case 'U':
				sOutput = "Uniform ";
				break;
			case 'V':
				sOutput = "Victor ";
				break;
			case 'W':
				sOutput = "Wiskey ";
				break;
			case 'X':
				sOutput = "X-ray ";
				break;
			case 'Y':
				sOutput = "Yankee ";
				break;
			case 'Z':
				sOutput = "Zulu ";
				break;
			default:
				sOutput = " ";
		}
		//outputting the ICAO words coorasponding with the word the user gave
		cout << sOutput<<endl;
		}	
		system("pause");
		return 0; 
	
	}
