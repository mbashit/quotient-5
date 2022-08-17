// quotient 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int weeks, days, hours, minutes,r,number, seconds;

	cout << "Enter the period in seconds :";
	cin >> number;
    
	weeks = (int)(number / 604800); // 60*60*24*7 = 604800
	r = number % 604800;

	days = (int)(r / 86400); // 60*60*24 = 86400
	r = r % 86400;

	hours = (int)(r / 3600); // 60*60 = 3600
	r = r % 3600;

	minutes = (int)(r / 60); // 1*60 = 60
	seconds = r % 60;

	cout << weeks << "week(s)" << days << "day(s)" << hours << "hour(s)" << endl;
	cout << minutes << "minute(s)" << seconds << "second(s)" << endl;

	return 0;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
