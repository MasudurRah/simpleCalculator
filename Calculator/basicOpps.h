#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// make all of these keep going ex. dont stop addition just a 2 variables
// make these all templateses

class basicOpps
{
public:
	int addition(int x, int y)
	{
		int res = x + y;
		return res;

	};
	
	int subtraction(int x, int y)
	{
		int res = x - y;
		return res;
	};
	
	int multiply(int x, int y)
	{
		int res = x * y;
		return res;
	};
	int divide(int x, int y)
	{
		int res = x / y;
		return res;
	};
	
};

