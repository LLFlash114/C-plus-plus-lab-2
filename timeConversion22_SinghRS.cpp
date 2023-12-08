/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: timeConversion22_SinghRS
// Summary: Takes time in seconds as input and converts it to hours, minutes, and seconds  
//
*-------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
	// Declaring variables
	int total_user_seconds, hours, minutes, seconds;
	
	// Reading total seconds from user
	cout << "Enter a time in seconds: ";
	cin >> total_user_seconds;
	
	// Converting user seconds to hours, minutes, and seconds format
	hours = (total_user_seconds / 60) / 60;
	minutes = (total_user_seconds / 60) % 60;
	seconds = total_user_seconds % 60;
	
	// Outputting the conversion
	cout << total_user_seconds << " total seconds is equivalent to " 
		<< hours << " hours, " << minutes << " minutes, " << "and "
		<< seconds << " seconds." << endl;   
	   
	return 0;   
}
