/* 
https://www.lynda.com/C-tutorials/C-Essential-Training/182674-2.html

1. Basic Syntax

cd /cygdrive/c/Users/Riley/Desktop/cpp_essential_training

g++ -std=c++11 -o prog_name 1_basic_syntax.cpp

./prog_name
*/
// this is a comment. The css style above is too!

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// data types: http://www.cplusplus.com/doc/tutorial/variables/
	// numeric data types
	int i = 4;
	float f = 1.3333333;
	double d = 3.1;

	// character data types
	char c = 'c';
	string s = "string";

	cout << i << endl;
	cout << f << endl;
	cout << d << endl;
	cout << c << endl;
	cout << s << endl;

	cout << endl;

	printf("%i\n", i);
	printf("%1.2f\n", f);
	printf("%f\n", d);
	printf("%c\n", c);
	printf("%s\n", s.c_str());

	printf("\n");

	// this is a comment. The css style above is too!
	// different print statements
	printf("Hello, world!\n");
	puts("Hi!");
	cout << "Hello, c++ program!\n";

	int x;
	x = 42;
	printf("x is %d\n", x);

	return 0;
}