// Chapter2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


double getInput() {
	double x = 0;
	cout << "Enter the double: ";
	cin >> x;
	return x;
}

char getOperand() {
	char sym;
	cout << "Enter one of the following: +, -, *, or /: ";
	cin >> sym;
	return sym;
}

void getSum(double x, double y, char sym) {

	double sum;
	if (sym == '+') {
		sum = x + y;
		cout << x << sym << y << " is " << sum;
	}

	if (sym == '-') {
		sum = x - y;
		cout << x << sym << y << " is " << sum;
	}

	if (sym == '*') {
		sum = x * y;
		cout << x << sym << y << " is " << sum;
	}

	if (sym == '/') {
		if (y == 0) {
			cout << " Division by zero is undefined";

		}
		else{
			sum = x / y;
			cout << x << sym << y << " is " << sum;
		}
		
	}

}

int main(){
	double first = getInput();
	double second = getInput();

	char op = getOperand();

	getSum(first, second, op);

    return 0;
}

