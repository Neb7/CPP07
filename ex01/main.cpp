/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benpicar <benpicar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:41:12 by benpicar          #+#    #+#             */
/*   Updated: 2025/06/13 15:27:06 by benpicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/**
 * @brief	Function to print and increment the value of an integer.
 * 
 * @param	value Reference to the integer value to be printed and incremented.
 */
void	print(int &value)
{
	value++;
	std::cout << value << " ";
}

/**
 * @brief	Function to print the value of a constant integer.
 * 
 * @param	value Constant reference to the integer value to be printed.
 */
void	const_print(int const &value)
{
	std::cout << value << " ";
}

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(arr) / sizeof(arr[0]);

	::iter(arr, length, print);
	std::cout << std::endl;

	::iter(arr, length, const_print);
	std::cout << std::endl;

	return 0;
}
