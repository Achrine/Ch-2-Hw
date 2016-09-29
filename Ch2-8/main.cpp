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
 A customer in a store is purchasing   ve items. The prices of the   ve items are:
 Price of item 1 = $12.95 Price of item 2 = $24.95 Price of item 3 = $6.95 Price of item 4 = $14.95 Price of item 5 = $3.95
 Write a program that holds the prices of the
 item s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 6%.
 
 
 
 
 */

//Preprocessor Directive
//this line of code causes the contens of another file to be inserted into the program

#include <iostream> 
using namespace std;

//the following line of code begins every C++ program

int main(){
    //variable definition statements
    double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
    double tax = 0.06;
    double subtotal = item1 + item2 + item3 + item4 + item5;
    double total = subtotal + (subtotal * tax);
    //input
    //Variable Assignment statement
    
    //Processing
    //Variable Assignment Statement using an expression
    
    //output to screen
    cout << "The subtotal is: " << subtotal << "\nThe total is: " << total << endl;
    
    //The next line of code reads: Return Zero
    return 0;
}
