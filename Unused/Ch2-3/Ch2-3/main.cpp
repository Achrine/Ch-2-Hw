//
//  main.cpp
//  Ch2-3
//
//  Created by Steven Brcak on 9/27/16.
//  Copyright © 2016 Steven Brcak. All rights reserved.
//


/*
 Write a program that will compute the total sales tax on a $52 purchase. 
 Assume the state sales tax is 4 percent and the county sales tax is 2 percent.
 */

#include <iostream>
using namespace std;


int main(){
    double ssTax = 0.04, csTax = 0.02;
    double tTax = ssTax + csTax; // total tax
    double purchase = 52.00;
    double res = purchase * tTax;
    cout << res << endl;
    
    return 0;
}
