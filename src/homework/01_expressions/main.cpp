//write include statements
#include "expressions.h"
#include <string>
#include <iostream>

//write namespace using statement for cout

using std::cout;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int product = multiply_numbers(10, 10);
	cout << "The product is " << product;
	cout << product;
	return 0;
}
