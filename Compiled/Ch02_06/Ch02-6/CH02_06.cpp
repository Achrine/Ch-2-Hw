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
 Suppose an employee gets paid every two weeks and earns $1700.00 each pay period. In a year the employee gets paid 26 times. Write a program thnaets dthee following variables:
 payAmount This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 1700.0.
 payPeriods This variable will hold the number of pay periods in a year . Initialize the variable with 26.
 annualPay This variable will hold the employee s total annual pay , which will be calculated.
 The program should calculate the employee s total annual pay by multiplying the employee s pay amount by the number of pay periods in a year , and store the result in the annualPay variable. Display the total annual pay on the screen.
*/

//Preprocessor Directive
//this line of code causes the contens of another file to be inserted into the program

#include <iostream> 
using namespace std;

//the following line of code begins every C++ program

int main(){
    //variable definition statements
    double payAmount = 1700.00;
    int payPeriod = 26;
    double annualPay = payAmount * payPeriod;
    //input
    //Variable Assignment statement
    
    //Processing
    //Variable Assignment Statement using an expression
    
    //output to screen
    cout << "He makes: " << annualPay << " a year" << endl;
    
    //The next line of code reads: Return Zero
    return 0;
}
