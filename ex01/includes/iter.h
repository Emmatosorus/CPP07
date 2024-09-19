#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>
void	print(T &t)
{
	std::cout << t << std::endl;
}

template <typename T>
void iter(T *t1, size_t t2, void func(T&))
{
	for (size_t i = 0; i < t2; i++)
		func(t1[i]);
}

#endif
