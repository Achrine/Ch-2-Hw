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
#include <string>
using namespace std;

//the following line of code begins every C++ program

int main(){
    //variable definition statements
    string name = "Steven",
		   address = "Example address, Moreno Valley, Ca, 92553",
		   major = "Philosophy";
	int telo = 18004649915;
	
		   
    //input
    //Variable Assignment statement
    
    //Processing
    //Variable Assignment Statement using an expression
    
    //output to screen
    cout << "Name: " << name << "\n" <<
	"\tAddress: " << address << "\n" <<
	"\tTelephone Number: " << telo << "\n"
    "\tMajor: " << major << "\n" << endl;
    
    //The next line of code reads: Return Zero
    return 0;
}
