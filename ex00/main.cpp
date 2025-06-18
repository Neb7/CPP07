/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benpicar <benpicar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:25:48 by benpicar          #+#    #+#             */
/*   Updated: 2025/06/13 15:23:44 by benpicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

# define ITALIC "\033[3m"
# define NC		"\033[0m"

int	main(void)
{
	int	a = 2;
	int	b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl << ITALIC
			  <<"* swap *" << NC << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	
	int const	e = 42, f = 13;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( a, b ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( e, f ) << std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl << ITALIC
			  <<"* swap *" << NC << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}
