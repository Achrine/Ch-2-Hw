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
/*
 Assuming the ocean s level is currently rising at about 1.5 millimeters per year , write a program that displays:
 * The number of millimeters higher than the current level that the ocean s level will be in 5 years
 * The number of millimeters higher than the current level that the ocean s level will be in 7 years
 * The number of millimeters higher than the current level that the ocean s level will be in 10 years
 
 
 */

//Preprocessor Directive
//this line of code causes the contens of another file to be inserted into the program

#include <iostream> 
using namespace std;

//the following line of code begins every C++ program

int main(){
    //variable definition statements
    double rate = 1.5;
    double atFive = rate * 5;
    double atSeven = rate * 7;
    double atTen = rate * 10;
    //input
    //Variable Assignment statement
    
    //Processing
    //Variable Assignment Statement using an expression
    
    //output to screen
    cout << "The ocean level at 5 years: " << atFive << endl;
    cout << "The ocean level at 7 years: " << atSeven << endl;
    cout << "The ocean level at 10 years: " << atTen << endl;

    
    //The next line of code reads: Return Zero
    return 0;
}
