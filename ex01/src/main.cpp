#include "../includes/iter.h"
#include <iostream>

template <typename T>
void	print(T &t)
{
	std::cout << t << std::endl;
}

int main(void)
{
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		std::string str[3] = {"Hello", "World", "Steve!"};
		iter(str, 3, print<std::string>);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int nb[3] = {0, 21, 42};
		iter(nb, 3, print<int>);
		std::cout << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 3 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		const int nb[3] = {0, 21, 42};
		iter(nb, 3, print<const int>);
		std::cout << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 4 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		const char nb[3] = {'a', 'b', 'c'};
		iter(nb, 3, print<const char>);
		std::cout << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}