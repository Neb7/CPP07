/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benpicar <benpicar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:57:24 by benpicar          #+#    #+#             */
/*   Updated: 2025/06/16 17:20:53 by benpicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/**
 * @brief	Constructor for the Array class, initializes an empty array.
 * 			"new T[0]" creates an array of size 0, which is valid in C++.
 */
template <typename T>
Array<T>::Array() : _array(new T[0]), _length(0)
{}

/**
 * @brief	Constructor for the Array class, initializes an array of size n.
 * 
 * @param	n The size of the array to be created.
 */
template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _length(n)
{
	for (unsigned int i = 0; i < this->_length; ++i)
	{
		this->_array[i] = T(); // Initialize with default value of T
	}
}

/**
 * @brief	Copy constructor for the Array class, creates a new array as a
 * 			copy of the given array.
 * 
 * @param	origin The array to be copied.
 */
template <typename T>
Array<T>::Array(Array const &origin) : _length(origin._length)
{
	if (_length == 0)
	{
		_array = new T[0];
	}
	else
	{
		_array = new T[_length];
		for (unsigned int i = 0; i < _length; ++i)
		{
			_array[i] = origin._array[i];
		}
	}
}

/**
 * @brief	Assignment operator for the Array class, assigns the contents of
 * 			another array to this array.
 * 
 * @param	other The array to be assigned.
 * @return	Returns a reference to this array.
 */
template <typename T>
Array<T>	&Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		if (this->_array != NULL)
		{
			delete[] _array;
		}
		_length = other._length;
		if (_length == 0)
		{
			_array = new T[0];
		}
		else
		{
			_array = new T[_length];
			for (unsigned int i = 0; i < _length; ++i)
			{
				_array[i] = other._array[i];
			}
		}
	}
	return (*this);
}

/**
 * @brief	Destructor for the Array class, cleans up the allocated memory.
 */
template <typename T>
Array<T>::~Array()
{
	if (this->_array != NULL)
		delete[] this->_array;
}

/**
 * @brief	Overloaded subscript operator for the Array class, allows access
 * 			to elements of the array using the index.
 * 
 * @param	index The index of the element to access.
 * @return	Returns a reference to the element at the specified index.
 * @throws	IndexOutOfRange if the index is out of bounds.
 */
template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= this->_length)
	{
		throw IndexOutOfRange();
	}
	return (this->_array[index]);
}

/**
 * @brief	Overloaded subscript operator for the Array class, allows access
 * 			to elements of the array using the index (const version).
 * 
 * @param	index The index of the element to access.
 * @return	Returns a constant reference to the element at the specified index.
 * @throws	IndexOutOfRange if the index is out of bounds.
 */
template <typename T>
T const	&Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_length)
	{
		throw IndexOutOfRange();
	}
	return (this->_array[index]);
}

/**
 * @brief	Returns the size of the array.
 * 
 * @return	The number of elements in the array.
 */
template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_length);
}

/**
 * @brief	Exception class for handling index out of range errors.
 */
template <typename T>
const char	*Array<T>::IndexOutOfRange::what() const throw()
{
	return ("Index out of range");
}
