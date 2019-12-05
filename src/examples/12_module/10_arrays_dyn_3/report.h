//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify

#include<iostream>



class MyReport
{
public:
	MyReport();
	void display()const;
	~MyReport();
private:
	BankAccount** accounts;
	const int SIZE{ 5 };

};

MyReport::MyReport()
	:accounts{ new BankAccount*[SIZE] } //save 5 memory addresses
{
	//creates dynamic memory(heap)
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i * 10);//calls default constructor
	}
}

void MyReport::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}

MyReport::~MyReport()
{
	for (int i = 0; i < SIZE; ++i)
	{
		delete[] accounts;

	}
	delete[] accounts;

}
