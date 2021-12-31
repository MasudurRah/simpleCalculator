#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "basicOpps.h"
#include "exception.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	string userName;
	int input;
	int x, x2;
	basicOpps bOpp;
	cout << "Which user are you?: ";
	cin >> userName;

	cout << "Hello " << userName << " welcome to Basic Calculator!" << endl;
	

	cout << "These are the list of things you can do!" << endl;
	cout << "1. Addition " << endl;
	cout << "2. Subtraction " << endl;
	cout << "3. Multiplication " << endl;
	cout << "4. Division " << endl;
	cout << "5. Trig Calculator (IN PROGRESS) ";
	cout << "9. To Quit " << endl;
	cin >> input;

	while (input != 9)
	{
		switch (input)
		{
		case 1:
			cout << "ADDITION" << endl;
			cout << "------------------------------" << endl;
			cout << "What two numbers do you want to add?: ";
			cin >> x >> x2;
			
			cout << "Your Result: " << bOpp.addition(x, x2);
			break;
			cout << endl;
		case 2:
			cout << "SUBTRACTION" << endl;
			cout << "------------------------------" << endl;
			cout << "What two numbers do you want to subtract?: ";
			cin >> x >> x2;

			cout << "Your Result: " << bOpp.subtraction(x, x2);
			break;
		case 3:
			cout << endl;
			cout << "MULTIPLICATION" << endl;
			cout << "------------------------------" << endl;
			cout << "What two numbers do you want to multiply?: ";
			cin >> x >> x2;

			cout << "Your Result: " << bOpp.multiply(x, x2);
			break;
			cout << endl;
		case 4:
			cout << endl;
			try 
			{

				cout << "DIVISON" << endl;
				cout << "------------------------------" << endl;
				cout << "Enter dividened: ";
				cin >> x;
				cout << "Enter divisor: ";
				cin >> x2;

				if (x2 == 0)
				{
					throw divByZero();
				}
				cout << "Your Result: " << bOpp.divide(x, x2);
				
			}
			catch(divByZero obj1)
			{
				cout << obj1.what() << endl;
				cout << "Returning Back to Main Menu...." << endl;
			}
			break;
			cout << endl;
		}
		cout << endl;
		cout << "These are the list of things you can do!" << endl;
		cout << "1. Addition " << endl;
		cout << "2. Subtraction " << endl;
		cout << "3. Multiplication " << endl;
		cout << "4. Division " << endl;
		cout << "5. Trig Calculator (IN PROGRESS)";
		cout << "9. To Quit " << endl;
		cin >> input;
	}
	
	
}