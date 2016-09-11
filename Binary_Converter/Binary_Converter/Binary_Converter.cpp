// Binary_Converter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int input() {
	int x = 0;
	do {
		cout << "Enter a number beetween 0 and 255 ";
		cin >> x;
	}

	while (x <= 0 && x >= 255);

	return x;
}

void convertBinary(int num) {
	int base = 2;
	int exp = 8;
	for (exp; exp >= 0; exp--) {
		if (num >= pow(base, exp)) {
			cout << 1; 
			num = num - pow(base, exp);
		}
		else {
			cout << 0;
		}

	}
	
}

int main()
{
	int x = input();
	convertBinary(x);
    return 0;
}

