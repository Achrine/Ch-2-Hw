#include <iostream>
using namespace std

int main(){
    int a = 0, b = 0, total = a + b; //defines two var for 1st problem sum 
    int tsalesp = 0, sales = 0; // total sales percent and sales
    int salestaxC = 0, salestaxS = 0, purchase = 0; // sales tax county, state, and purchase cost
    int tax;
    int choice = 0;
    cout << "Do you want to calculate sum (1) : " << endl;
    cout << "Predict money generation of company (2) : " << endl;
    cout << "Compute total sales tax (3) : " << endl;
    cout << "Calculate the restaurant bill (4) : " << endl;
    cout << "Calculate the average (5) : " << endl;
    if (choice == 0){
	    cout << "input two numbers to calculate the sum ..."; 
	    cin >> a >> b >> endl;
	    cout << total << endl;
    }else if (choice == 1){
	    

