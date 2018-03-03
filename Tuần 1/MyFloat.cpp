// MyFloat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <conio.h>
using namespace std;

struct MyFloat {
	unsigned int fraction : 23;
	unsigned int exponent : 8;
	unsigned int sign : 1;
};

union Float {
	float f;	
	MyFloat mf;
};

int main()
{
	Float F;
	F.f = 0.5f;
	printf("%d %d %d", F.mf.sign, F.mf.exponent, F.mf.fraction);
	_getch();
    return 0;
}

