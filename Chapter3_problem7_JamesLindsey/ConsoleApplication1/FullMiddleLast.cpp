// this program finds the first 3 "and" in a sentence. The info will be stored as int values called first second and third

#include <iostream>
#include <string> // for using strings




using namespace std;

int main()
{
	
	// problem 7
	string sFirst;
	string sMiddle;
	string sLast;
	string sFull_Name;

	cout << "Enter your full name" << endl;


	cin >> sFull_Name;

	int index;

	index = sFull_Name.find(' ');

	sFirst = sFull_Name.substr(index + 1, sFull_Name.length());

	cout << "First Name : " << sFirst << endl;

	sFirst = sFull_Name.substr(index + 1, sFull_Name.length());

	index = sFull_Name.find(' ');

	cout << "Middle Name: " << sFull_Name.substr(0, index) << endl;

	sMiddle = sFull_Name.substr(index+1, sFull_Name.length());

	cout << "Last Name: " << sFull_Name << endl;

	system("pause");

			return 0;

}