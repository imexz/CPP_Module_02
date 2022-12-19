/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:40:56 by mstrantz          #+#    #+#             */
/*   Updated: 2022/04/10 18:28:06 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {

	//std::cout << "default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {

	//std::cout << "Parameterized constructor called" << std::endl;
}

Point::Point(Point const &src) {

	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Point::~Point(void) {

	//std::cout << "destructor called" << std::endl;
}

float Point::getX() const {

	return (_x.toFloat());
}

float Point::getY() const {

	return (_y.toFloat());
}

Point	&Point::operator=(Point const &src) {

	/* if (this == &src)
		return (*this);
	_x = src.getX();
	_y = src.getY(); */
	(void)src;
	return (*this);
}
