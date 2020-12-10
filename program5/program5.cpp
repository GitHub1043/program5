// program5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand (time(0));								// Initialize the system time source

	int num = 0;

	// Output the first line

	cout << "The number generated is ";

	for (int i = 0; i < 100; i++){
		num = (1 + rand() % 1000);					// Generate random numbers

		cout << " " << num;

		if (i % 10 == 0){
			cout << endl;							// Skip 10 lines
		}

	}

	cout << endl;									// Skip a line

	return 0;
}

