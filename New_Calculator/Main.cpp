#include <iostream>
#include <cmath>

using namespace std;

//main function 
int main()
{
	//Define Variables
	char operation;
	double number1, number2;

	//Get User Input for First Number
	cout << "Enter First Number: ";
	cin >> number1;

	//Get User Input for operation
	cout << "The Operation (+, -, *, / ): ";
	cin >> operation;

	//Get User Input for Second Number
	cout << "Enter Second Number: ";
	cin >> number2;

	// starting switch case system for calculator portion
	switch (operation)
	{

	// Math and Formatting for addition operation
	case '+':
		cout << number1 << " " << operation << " " << number2 << " = " << number1 + number2 << endl;
		break;

	// Math and Formatting for subtraction operation
	case '-':
		cout << number1 << " " << operation << " " << number2 << " = " << number1 - number2 << endl;
		break;

	// Math and Formatting for multiplication operation
	case '*':
		cout << number1 << " " << operation << " " << number2 << " = " << number1 * number2 << endl;
		break;

	// Math and Formatting for division operation
	case '/':

		// If Statement for dividing a number by zero
		if (number1 == 0.0)
		{
			// Prints response to zero division situation
			cout << "Unable to divide numbers by zero" << endl;
		}

		// Else if Statement for dividing a number by zero
		else if (number2 == 0.0)
		{
			// Prints response to zero division situation
			cout << "Unable to divide numbers by zero" << endl;
		}

		// Prints division statements
		else
		{
			cout << number1 << " " << operation << " " << number2 << " = " << number1 / number2 << endl;
		}
		break;

		// Default response to using any other symbol not listed
	default:
		cout << "Invalid Operator" << endl;
	}
}