#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <class T>
class Array
{
	public:
		Array() : array(NULL), nb_elements(0)
		{
		}

		Array(unsigned int n) : array(new T[n]), nb_elements(n)
		{
		}

		Array(const Array & a)
		{
			this->array = new T[a.size()];
			for (size_t i = 0; i < a.size(); i++)
				this->array[i] = a.array[i];
			this->nb_elements = a.size();
		}

		~Array()
		{
			delete this->array;
		}

		T & operator[](size_t index)
		{
			if (index > this->nb_elements)
				throw std::invalid_argument("Index is out of bounds");
			return this->array[index];
		}


		Array & operator=(const Array & a)
		{
			delete this->array;
			this->array = new T[a.size()];
			for (size_t i = 0; i < a.size(); i++)
				this->array[i] = a.array[i];
			this->nb_elements = a.size();
			return *this;
		}

		size_t	size() const
		{
			return nb_elements;
		}

	private:
		T *array;
		size_t	nb_elements;
};

#endif
