//
//  main.cpp
//  Ch2-5
//
//  Created by Steven Brcak on 9/28/16.
//  Copyright © 2016 Steven Brcak. All rights reserved.
//


/*
 To get the average of a series of values, you add the values up and then divide the sum by the number of values. 
 Write a program that stores the following values inve different variables: 28, 32, 37, 24, and 33. 
 The program should first calculate the sum of these five variables and store the result in a separate variable named sum.
 Then, the program should divide thesum variable by 5 to get the average. Display the average on the screen.
 
 
 */

#include <iostream>
using namespace std;

int main(){
    double a, b, c, d, e;
    a = 28;
    b = 32;
    c = 37;
    d = 24;
    e = 33;
    double sum = a + b + c + d + e;
    double avg = sum / 5;
    cout << "The sum is: " << sum << "\nThe average is: " << avg << endl;
}
