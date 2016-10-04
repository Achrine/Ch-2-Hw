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
    int survey = 12467;
	double per_more = 0.14, per_citrus = 0.64, // percents as double. 
		   OneOrMore = survey * per_more, CitrusPref = per_citrus * survey;
    //input
    //Variable Assignment statement
    
    //Processing
    //Variable Assignment Statement using an expression
    
    //output to screen
    cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: "
		<< OneOrMore << endl;
    cout << "The approximate number of customers in the survey who prefer citrus flavored energy drinks: " 
		<< CitrusPref << endl;
    
    //The next line of code reads: Return Zero
    return 0;
}
