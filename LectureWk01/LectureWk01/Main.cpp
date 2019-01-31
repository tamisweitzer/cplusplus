// C++ Demo
// Tami Sweitzer

#include <iostream>	//	Needed for cout. Stands for in/out stream
#include <conio.h>	// needed for the _getch() to work. Stands for 'control input/output'

using namespace std; // Allows you to type cout instead of std::cout

// The app always starts with a main() function
// There can be only one
// The function returns an integer,// C++ Demo
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


	/* Variable and Primitive Data Types*/
	int i = 0;
	float f = 2.5f;
	double d = 2.5436355932;	// A double has greater precision than float
	bool b = false;
	char c = 'J';

	/* Printing variables to screen */
	cout << "The value of i is " << i << "\n";	// 0
	cout << "The value of f is " << f << "\n";	// 2.5
	cout << "The value of d is " << d << "\n";	// 2.54364, notice number is rounded
	cout << "The value of b is " << b << "\n";	// 0, notice false = 0; true = 1
	cout << "The value of c is " << c << "\n";	// J

	/* Constants */
	// The const keyword can come before or after the return type
	const float PI = 3.1415926f;
	float const PI = 3.1415926f;


	/* Casting */
	// to cast a float to an int:
	int i = 44;
	float f = 16.2f;
	f = (float)i; /* This casts the value in 'i'
				  and then assigns it to the float of 'f' */

				  /* Arithmetic and Unary Operations */

				  /*
				  Logical		&&, ||, !
				  Relational	==, !=, <, >, <=, >=
				  Aritmetic	+, -, *, /, %
				  Assignment	=, +=, -=, *=, /=, %=
				  Unary		++, --
				  Bitwise		&, |, <<, >>, ~, ^
				  Ternary		? :
				  */






				  /* _getch() stands for 'get char',
				  waits for the user to press a character */
	_getch();


	return 0; // Returns without errors
}
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