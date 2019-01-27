// C++ Demo
// Tami Sweitzer

#include <iostream>	//	Needed for cout. Stands for in/out stream
#include <conio.h>	// needed for the _getch() to work. Stands for 'control input/output'

using namespace std; // Allows you to type cout instead of std::cout

// The app always starts with a main() function
// There can be only one
// The function returns an integer,
// hence the return 0; statement
int main()
{
	std::cout << "Hello World";

	// Using special/escape characters
	std::cout << "\"Hello World\"";

	// Ways to make a new line in the console
	std::cout << "\n";
	std::cout << "Line one\n";
	std::cout << "Line two" << "\n";
	std::cout << "Line three" << std::endl;

	_getch();	/* 'get char', waits for the user to press a character
				*/


	/* Variable and Primitive Data Types*/
	int i = 0;
	float f = 2.5f;
	double d = 2.543634;	// A double has greater precision than float
	bool b = false;
	char c = 'J';



	return 0; // Returns without errors
}