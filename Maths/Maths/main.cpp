#include "stdafx.h"
#include <iostream>
#include "stdio.h"

int input();

int doubleNumber(int x);
void outputDouble(int y,int z);

bool isEven(int num); 
void outputEven(bool n, int m);

int findExp(int num, int exp);

using namespace std;

int main()
{

	cout << boolalpha << endl;

	cout << "Double";
	int num1 = input();
	int doubleNum1 = doubleNumber(num1);
	outputDouble(doubleNum1,num1);

	cout << "Even";
	int num2 = input();
	bool even = isEven(num2);
	outputEven(even, num2);

	cout << "Base and exponent";
	int base = input();
	int exp = input();

	int result = findExp(base, exp);
	cout << base << " to the power of " << exp << " is ";
	cout << result << endl;
	return 0;
}