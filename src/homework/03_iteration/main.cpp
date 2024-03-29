//write include statements
#include "dna.h"
#include <string>
#include <iostream>
//write using statements
using std::string;
using std::cout;
using std::cin;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{
	int menu = 0;
	string menu_choice = "y";
	while (menu_choice == "y" || menu_choice == "Y")
	{
		string dna = "";
		cout << "Enter DNA sequence: ";
		cin >> dna;
		cout << "For GC entries press 1, for DNA complements press 2: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << "The GC entries of the DNA are: " << get_gc_content(dna) << "\n";
			break;
		case 2:
			cout << "The Complement of the DNA is: " << get_dna_complement(dna) << "\n";
			break;
		default:
			cout << "Invalid Option\n";

		}

		cout << "Do you want to try again? ('y' to start again)";
		cin >> menu_choice;
	}

	return 0;
}