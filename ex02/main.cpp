/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benpicar <benpicar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 19:04:00 by benpicar          #+#    #+#             */
/*   Updated: 2025/06/11 19:37:28 by benpicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

#define GREEN "\033[0;92m"
#define RESET "\033[0m"

int	main(void)
{
	int * a = new int();
	std::cout << "a = " << *a << std::endl;
	delete a;

	std::cout << std::endl << GREEN << "TEST Array<int>" << RESET << std::endl;

	Array<int> emptyArray;
	std::cout << "emptyArray size = " << emptyArray.size() << std::endl;

	Array<int>	arr(5);
	
	for (unsigned int i = 0; i < arr.size(); ++i)
	{
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	}
	std::cout << "Changement de valeur" << std::endl;
	for (unsigned int i = 0; i < arr.size(); ++i)
	{
		arr[i] = i * 10;
	}

	for (unsigned int i = 0; i < arr.size(); ++i)
	{
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	}

	try
	{
		std::cout << "arr[10] = " << arr[10] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << GREEN << "TEST Array<std::string>" << RESET << std::endl;

	Array<std::string> strArray(3);
	strArray[0] = "Hello";
	strArray[1] = "World";
	strArray[2] = "42";
	for (unsigned int i = 0; i < strArray.size(); ++i)
	{
		std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
	}
	try
	{
		std::cout << "strArray[5] = " << strArray[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
