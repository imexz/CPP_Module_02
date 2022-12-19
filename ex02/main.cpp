/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:01:18 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/29 22:38:29 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "Pre-/ Postincrementing" << std::endl;
	std::cout << a << std::endl;
	std::cout << "preincrementing a: " << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << "postincrementing a: " << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "Pre-/ Postdecrementing" << std::endl;
	std::cout << a << std::endl;
	std::cout << "predecrementing a: " << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << "postdecrementing a: " << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << "comparisons" << std::endl;
	std::cout << "a < b  " << ((a < b) ? "true" : "false") << std::endl;
	std::cout << "a <= b  " << ((a <= b) ? "true" : "false") << std::endl;
	std::cout << "a > b  " << ((a > b) ? "true" : "false") << std::endl;
	std::cout << "a >= b  " << ((a >= b) ? "true" : "false") << std::endl;
	std::cout << "a == b  " << ((a == b) ? "true" : "false") << std::endl;
	std::cout << "a == a  " << ((a == a) ? "true" : "false") << std::endl;
	std::cout << "a != b  " << ((a != b) ? "true" : "false") << std::endl;

	a = (float) 5.000;
	std::cout << "arithmetic operators" << std::endl;
	std::cout << "a + b =  " << a + b << std::endl;
	std::cout << "a - b =  " << a - b << std::endl;
	std::cout << "a * b =  " << a * b << std::endl;
	std::cout << "a / b =  " << a / b << std::endl;

	std::cout << "max and min" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b) << std::endl;

	return 0;
}
