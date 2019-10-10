//atm.h
#include "bank_account.h"
#ifndef ATM_H
#define ATM_H
class ATM {

public:
	ATM(BankAccount a);
	void deposit(int amount);
	void display_balance() const;
	void withdraw(int amount);

private:
	BankAccount account;

};

#endif