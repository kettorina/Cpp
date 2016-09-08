// Chapter2.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include "constants.h"

using namespace std;
using namespace myConstants;

double getInitialHeight() {
	double height = 0;
	cout << "Enter the initial height of the towel: ";
	cin >> height;
	return height;
}

double calcHeight(double second, double height) {
	double heightAtXSec;
	double distFallen = 0;
	distFallen = ::gravity*pow(second, 2) / 2;
	heightAtXSec = height - distFallen;
	
	return heightAtXSec;
}

void printHeight(double sec, double h) {
	if (h == 0 || h < 0) {
		cout << "At " << sec << " seconds, the ball is on the ground" << endl;
	}
	else {
		cout << "At " << sec << " seconds, the ball is at height: " << h << " meters" << endl;
	}
}


int main()
{
	double height = 0;
	double initialHeight = getInitialHeight();
	for (int count = 0; count <= 5; count++) {
		height= calcHeight(count, initialHeight);
		printHeight(count, height);
	}
    return 0;
}

