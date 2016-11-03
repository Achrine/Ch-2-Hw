//
//  main.cpp
//  Ch2-2
//
//  Created by Steven Brcak on 9/27/16.
//  Copyright © 2016 Steven Brcak. All rights reserved.
//

/*
 The East Coast sales division of a company generates 62 percent of total sales. 
 Based on that percentage, write a program that will predict how much the East Coast division will generate 
 if the company has $4.6 million in sales this year.
 */

#include <iostream>
using namespace std;

int main(){
    double per = .62;
    int sales = 4600000;
    int gen = sales * per;
    cout << gen << endl;
}

