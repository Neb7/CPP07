/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benpicar <benpicar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:35:22 by benpicar          #+#    #+#             */
/*   Updated: 2025/06/17 15:24:13 by benpicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

/**
 * @brief	Template function to iterate over an array and apply a function to each element.
 * 
 * @param	array Pointer to the array to iterate over.
 * @param	length Length of the array.
 * @param	func Pointer to the function to apply to each element.
 */
template <typename T>
void	iter(T *array, size_t length, void (*func)(T &))
{
	if (!array || !func || length == 0)
		return ;
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
	// This line is just for demonstration purposes, it can be removed.
	// std::cout << std::endl << "func is not const";
}

/**
 * @brief	Template function to iterate over an array and apply a function to each element.
 * 
 * @param	array Pointer to the array to iterate over.
 * @param	length Length of the array.
 * @param	func Pointer to the function to apply to each element.
 */
template <typename T>
void	iter(T *array, size_t length, void (*func)(T const &))
{
	if (!array || !func || length == 0)
		return ;
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
	// This line is just for demonstration purposes, it can be removed.
	// std::cout << std::endl << "func is const";
}

#endif
