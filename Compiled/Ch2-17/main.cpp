//
//  main.cpp
//  Ch2-6
//
//  Created by Steven Brcak on 9/29/16.
//  Copyright © 2016 Steven Brcak. All rights reserved.
//

// Assignment: Program Challenge
//             Chapter 2 number 99
//Filename:    Ch...
//Creation Date:
//Description;


//Preprocessor Directive
//this line of code causes the contens of another file to be inserted into the program

#include <iostream> 
using namespace std;

//the following line of code begins every C++ program

int main(){
    //variable definition statements
    double shares_cost = 21.77, per = 0.02,
		   commission = shares_cost * per,
		   total = shares_cost + commission;
    //input
    //Variable Assignment statement
    
    //Processing
    //Variable Assignment Statement using an expression
    
    //output to screen
    cout << "Amount paid for the stock alone: " << shares_cost << endl;
	cout << "Ammount for commission: " << commission << endl;
	cout << "Total amount paid: " << total << endl;
    
    //The next line of code reads: Return Zero
    return 0;
}
