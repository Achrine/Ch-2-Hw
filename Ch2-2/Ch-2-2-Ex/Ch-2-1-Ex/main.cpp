//Programmer: Your name here 
//Assignment: Program Challenge 
// Chapter 2 Number 2
// Filename: CH02_PC02.cpp (source code file extension = .cpp )
// Creation Date: Key-in the creation date
// Description: The purpose of this program is ... to produce a sales prediction. 
// 

//PreProcessor Directive 
// THis line of code causes the contents of another file to be inserted into the program 

#include <iostream> 
using namespace std; 

//The following line of code begins every C++ Program 

int main() {
	// Variable Definition Statements 
	float EastCoastSalesPercentage; 
	double PredictedSales; 
	//Input --using hardcode method from Chapter 2 
	//Variable Assignment Statement 
	EastCoastSalesPercentage = 0.30; 

	//Processing 
	//Variable Assignment Statement using an Expression 
	PredictedSales = EastCoastSalesPercentage * 1000000.00;
	//Output to the screen 
	cout << "This proram predicts sales for the Eat Coast division. \n\n";
	cout << "Predicted Sales for the division are" << PredictedSales << endl << endl; 

	// The next line of code reads: return Zero (not Oh!) (see text for explanation)
	return 0;
}