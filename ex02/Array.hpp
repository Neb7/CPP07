/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benpicar <benpicar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:52:48 by benpicar          #+#    #+#             */
/*   Updated: 2025/06/16 17:20:29 by benpicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_length;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &origin);
		Array			&operator=(Array const &other);
		~Array();

		T				&operator[](unsigned int index);
		T const			&operator[](unsigned int index) const;

		unsigned int	size() const;

		class IndexOutOfRange : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
