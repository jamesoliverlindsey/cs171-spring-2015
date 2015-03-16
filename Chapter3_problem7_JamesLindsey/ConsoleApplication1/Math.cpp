
#include <iostream>
#include <string> // for using strings
#include <cmath> // for math stuff


using namespace std;

int mainmath()

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~math section~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//problem 6
{
cout << "math problems"
<< endl;
float fX;
float fY;
float fA;
float fB;
float fC;
float fD;

cout << "enter an X,Y value for 3X+Y" << endl;
cout << "enter an A,B,C value for A^2+2B+C" << endl;
cout << "enter an A,B,C,D,X,Y value for ((A+B)/(C-D)*(X/Y)" << endl;
cout << "enter an A,B,C,D,X,Y value for ((A^2 + 2B+C)/D)/(X*Y)" << endl;
cout << "enter an A,B value for sqrt(abslutevalue(A-B))" << endl;
cout << "enter an X,Y value for X^(-cos(Y))" << endl;

cin >> fX;
cin >> fY;
cin >> fA;
cin >> fB;
cin >> fC;
cin >> fD;
system("pause");
cout << "3X + Y= " << 3 * fX + fX << endl;

cout << "A^2+2B+C= " << (pow(fA, 2) + 2 * fB + fC) << endl;

cout << "((A+B)/(C-D)*(X/Y)= " << ((fA + fB) / (fC - fD)*(fX / fY)) << endl;

cout << "((A^2 + 2B+C)/D)/(X*Y)= " << ((pow(fA, 2) + 2 * fB + fC) / (fD)) / (fX*fY) << endl;

cout << "sqrt(abslutevalue(A-B))= " << sqrt(abs(fA - fB)) << endl;

cout << "X^(-cos(Y))= " << ((pow(fX, (-cos(fY * 3.14159265 / 180))))) << endl;



system("pause");












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

	sMiddle = sFull_Name.substr(index + 1, sFull_Name.length());

	cout << "Last Name: " << sFull_Name << endl;

	system("pause");

	return 0;


}