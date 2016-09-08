#include "stdafx.h"
#include <iostream>;

using namespace std;

int readNumber() {
	int x = 0;

	cout << "Enter a number: ";
	cin >> x;
	return x;
}

void writeAnswer(int sum) {
	cout << sum;
}
