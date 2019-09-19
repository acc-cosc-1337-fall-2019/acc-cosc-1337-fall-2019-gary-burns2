#include "for_ranged.h"
#include<iostream>
#include<vector>
#include "for_ranged.h"

using std::vector;

/*
Write code for loop_string_w_index that accepts a string parameter.
The function uses an indexed for loop to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t
*/


/*
Write code for loop_string_w_index that accepts a string parameter.
The function uses a for ranged loop using auto to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t
*/


void loop_string_w_auto(std::string str, std::string &str1)
{
	//not modifiable
	for (auto ch : str)
	{
		ch = 'j';
		std::cout << ch << "\n";
	}


//modifiable
	for (auto ch : str)
	{
		ch = 'j';
		std::cout << ch << "\n";
	}
}