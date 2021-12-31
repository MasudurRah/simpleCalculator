#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


class divByZero
{
public:
	divByZero()
	{
		message = "ERROR: Division By Zero!";
	}
	divByZero(string x)
	{
		message = x;
	}
	string what()
	{
		return message;
	}

private:
	string message;
};
