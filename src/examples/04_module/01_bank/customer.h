//customer.h
#include<vector>
#include "bank_account.h"
#include<iostream>

using std::vector;
using std::ostream;

class Customer
{
public:
	void add_account(BankAccount act);
	friend ostream& operator<<(ostream& out, const Customer& act);
	void remove_account(BankAccount act);

private:
	vector<BankAccount> accounts;
	int total_balance{ 0 };

};