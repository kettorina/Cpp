// Chapter1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "io.h"
int main()
{
	int x = 0;
	int y = 0;
	int sum;
	x = readNumber();
	y = readNumber();
	sum = x + y;
	writeAnswer(sum);
}
