/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Fabrizio Giolito
 */

#include <iostream>
#include "std_lib_facilities.h"

int real_checker(int a, int b, int c);
void quadratic(int a, int b, int c);

int main() {

	int status, a, b, c;

	while(status == 0){

		cout << "Quadratic equations are in the form a * x^2 + b*x + c = 0. Please enter your a, b and c respectively (ex. 1 5 6)\n";
		cin >> a >> b >> c;

		if(a != 0)
			status = 1;
		else
			cout << "a cannot be 0 please try again.\n";

	}

	quadratic(a, b, c);
  
} 

int real_checker(int a, int b, int c){

	int square = b*b;
	int check = 4*a*c;

	if(square - check < 0)
		return -1;
	else 
		return square - check;
}

void quadratic(int a, int b, int c){

	int check = real_checker(a, b, c);

	if(check == -1)
		cout << "This equation does not have real roots.\n";

	else {
		double root1 = (-b + sqrt(check))/(2*a); 
		double root2 = (-b - sqrt(check))/(2*a); 

		cout << "The roots of the equation are x = " << root1 << " and x = " << root2;
	}
		
}