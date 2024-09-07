#include "../includes/Array.h"
#include <iostream>

int main(void)
{
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int * a = new int();
		std::cout << *a << std::endl;

		Array<int> A = Array<int>(5);
		std::cout << A[0] << std::endl;
		A[0] = 3;
		std::cout << A[0] << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int * a = new int();
		std::cout << *a << std::endl;

		Array<int> A = Array<int>(5);
		std::cout << A[180] << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 3 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		Array<int> A = Array<int>(5);
		std::cout << A.size() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 4 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		Array<std::string> A = Array<std::string>(5);
		A[0] = "Hey guys!";
		A[1] = "How are you?";
		A[2] = "I'm doing fine!";
		A[3] = "Have a nice day! ^^";
		for (int i = 0; i < 4; i++)
			std::cout << A[i] << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
