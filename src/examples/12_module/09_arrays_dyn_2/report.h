#include "C:\Users\xxcir\source\repos\acc-cosc-1337-fall-2019-gary-burns2\src\examples\12_module\08_arrays_dyn_1\bank_account.h"
//
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
class Report
{
public:
	Report();
	void display()const;
	~Report();
private:
	BankAccount* accounts; //pointer to pointer
	const int SIZE{ 5 };

};