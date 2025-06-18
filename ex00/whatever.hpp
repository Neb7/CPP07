/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benpicar <benpicar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:26:31 by benpicar          #+#    #+#             */
/*   Updated: 2025/06/11 18:34:31 by benpicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

/**
 * @brief	Templates for Swaps the values of two variables.
 * 
 * @param	a First references to a variable to swap.
 * @param	b Second references to a variable to swap.
 */
template <typename T>
void	swap(T &a, T &b)
{
	T c = a;

	a = b;
	b = c;
}

/**
 * @brief	Templates for Returns the minimum of two values.
 * 
 * @param	a First value to compare.
 * @param	b Second value to compare.
 * @return	The minimum of the two values.
 */
template <typename T>
T const	min(T const a, T const b)
{
	return (a < b ? a : b);
}

/**
 * @brief	Templates for Returns the maximum of two values.
 * 
 * @param	a First value to compare.
 * @param	b Second value to compare.
 * @return	The maximum of the two values.
 */
template <typename T>
T const	max(T const a, T const b)
{
	return (a > b ? a : b);
}

#endif
