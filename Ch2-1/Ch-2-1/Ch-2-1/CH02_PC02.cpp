//
//  Programmer: Your name here

// Assignment: Program Challenge
//             Chapter 2 number 01
//Filename:    Ch...
//Creation Date: oct 12
//Description; add numbers


//Preprocessor Directive
//this line of code causes the contens of another file to be inserted into the program

#include <iostream> 
using namespace std;

//the following line of code begins every C++ program

int main() {
	//variable definition statements
	int Num01;
	int Num02;
	int Total;
	//input
	//Variable Assignment statement
	Num01 = 10;
	Num02 = 15;
	//Processing
	Total = Num01 + Num02;
	//Variable Assignment Statement using an expression

	//output to screen
	cout << "The sum of two numbers is" << Total << endl << endl;

	//The next line of code reads: Return Zero
	return 0;
}
