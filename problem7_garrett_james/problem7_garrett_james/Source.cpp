// Created by: Garrett Johnson And James Lindsey
//Febuary 12 2015
//Month from the day
//This program outputs the month from data inputted by a user.





#include <iostream>

using namespace std;

int main()
{
	// variable pool
	int iDayOfYear;

	//getting input from the user
	cout << "Enter an integer ranging from 1 to 365 corresponding to the day of the year. " << endl;
	cin >> iDayOfYear;//storing the input under the statement iDayOfYear


	//Nested ifs to find where the statement is true and will output the correct month
	
	if (iDayOfYear >= 1 && iDayOfYear <= 31)
		cout << "The month is January" << endl;


	else if (iDayOfYear >= 32 && iDayOfYear <= 59)
		cout << "The month is February" << endl;


	else if (iDayOfYear >= 60 && iDayOfYear <= 90)
		cout << "The month is March" << endl;


	else if (iDayOfYear >= 91 && iDayOfYear <= 120)
		cout << "The month is April" << endl;


	else if (iDayOfYear >= 121 && iDayOfYear <= 151)
		cout << "The month is  May" << endl;


	else if (iDayOfYear >= 152 && iDayOfYear <= 181)
		cout << "The month is  June" << endl;


	else if (iDayOfYear >= 182 && iDayOfYear <= 211)
		cout << "The month is  July" << endl;


	else if (iDayOfYear >= 212 && iDayOfYear <= 242)
		cout << "The month is  August" << endl;


	else if (iDayOfYear >= 243 && iDayOfYear <= 273)
		cout << "The month is September" << endl;


	else if (iDayOfYear >= 274 && iDayOfYear <= 304)
		cout << "The month is October" << endl;


	else if (iDayOfYear >= 305 && iDayOfYear <= 333)
		cout << "The month is November" << endl;


	else if (iDayOfYear >= 334 && iDayOfYear <= 365)
		cout << "The month is December" << endl;

	else
		cout << "You need to make sure your entry is a number between 1 and 365" << endl;// error output statement

	system ("pause");

	return 0;

}