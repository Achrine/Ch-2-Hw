//Programmer: Your name here 
//Assignment: Program Challenge 
// Chapter 2 Number 3
// Filename: CH02_PC03.cpp (source code file extension = .cpp )
// Creation Date: Key-in the creation date
// Description: The purpose of this program is ...
// to calculate sales tax fer $100 transaction. 
// State Sales tax is 4% of the sale
// County Sales Tax is 2% of the sale
// State and coutny Sales tax are added to give a total for taxes
// Sales Amount and Total Sales taxes are added to give a total amount due.
// 

//PreProcessor Directive 
// This line of code causes the contents of another file to be inserted into the program 
#include <iostream> 
using namespace std; // see page 28 of Gaddis 7th ed for exlanation 

//The following line of code begins every C++ Program 
// All C++ programs begin with this line of code.

int main() {
	// Variable Definition Statements (ake variable Declation Statements)
	double SalesAmount, //This is a single statement in a verticle list using commas 
		StateSalesTax,
		CountySalesTax,
		TotalSalesTax,
		GrandTotal;
	//Overview Statement 
	cout << "This program calculates taxes on a 100 dollar transaction" << endl << endl;
	//Input
	//Note in this case the sales amount is hardcoded 
	//variable assignment statement
	SalesAmount = 100.00;
	//Processing 
	//Note: These are also Assignment Statements 
	// With each one using an expression 
	// To assign a value to the variable 
	StateSalesTax = SalesAmount * 0.04;
	CountySalesTax = SalesAmount * 0.02;
	TotalSalesTax = StateSalesTax + CountySalesTax;
	GrandTotal = SalesAmount + TotalSalesTax;

	// Output 
	cout << "The State Sales Tax is \t" << StateSalesTax << endl << endl;
	cout << "The County Sales Tax is \t" << CountySalesTax << endl << endl;
	cout << "The Total sales Tax is \t" << TotalSalesTax << endl << endl;
	cout << "The total Amount Due is \t\t" << GrandTotal << endl << endl;

	return 0;
}