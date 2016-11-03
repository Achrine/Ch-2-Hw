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
	int tank = 20;
    double town_MPG = 21.5, high_MPG = 26.8; //town miles per gallon, and highway
           trav_town = town_MPG * tank, trav_high = high_MPG * tank; //traviling in town and in highway
	
	
    //input
    //Variable Assignment statement
    
    //Processing
    //Variable Assignment Statement using an expression
    
    //output to screen
    cout << "The car travels " << trav_high << "on the highway." << endl;
	cout << "The car travels " << trav_town << "in the the town." << endl;
    
    //The next line of code reads: Return Zero
    return 0;
}
