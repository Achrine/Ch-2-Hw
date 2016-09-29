//
//  main.cpp
//  Ch2-4
//
//  Created by Steven Brcak on 9/28/16.
//  Copyright © 2016 Steven Brcak. All rights reserved.
//


/* Write a program that computes the tax and tip on a restaurant bill for a patron with a $44.50 meal charge. 
 The tax should be 6.75 percent of the meal cost. The tip should be 15 percent of the total after adding the tax.
 Display the meal cost, tax amount, tip amount, and total bill on the screen.
 */
#include <iostream>
using namespace std;

int main(){
    double tax = 0.0675, bill = 44.50, tip = 0.15;
    double total = (bill * (tax + tip)) + bill;
    
    
    cout << "The meal cost: " << bill << " \nThe tax amount is: " << tax * 100 << " \nThe total bill is: " << total << endl;
}
