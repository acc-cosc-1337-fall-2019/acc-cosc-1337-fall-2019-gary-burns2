#include<iostream>

int main() 
{
	int num = 5;
	std::cout << "Address: " << &num <<"\n";
	std::cout << "Value: " << num;

	int &num_Ref = num;
	std::cout << num_Ref << "\n";
	
	num_Ref = 10;
	std::cout << num_Ref << "\n";
	std::cout << num << "\n";

	return 0;
}