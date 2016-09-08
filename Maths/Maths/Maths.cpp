// Maths.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "stdio.h"

using namespace std;

bool isEven(int number) {
	bool even=false;
	if (number % 2==0) {
		even = true;
	}
	return  even;
}

void outputEven(bool divisible, int num) {
	cout << num << " is even: " << divisible<< endl;
}

int findExp(int base, int exp) {
	int result=1;
	if (exp <= -1) {
		cout << "This program can't deal with negative numbers yet";
		return 0;
	}
	//when exp is 0
	while (exp>0) {
		result *= base;
		exp--;
	}

	return result;
}

int doubleNumber(int x) {
	return 2 * x;
}

int input() {
	int num;
	cout << "\n Enter a number: ";
	cin >> num;
	return num;
}

void outputDouble(int d, int num) {
	cout << d << " is double of " << num << endl;
}


