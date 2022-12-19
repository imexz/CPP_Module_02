/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:01:16 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/29 19:59:01 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointNumber_value(0) {

	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int in_int) : _fixedPointNumber_value(in_int << _nb_fractional_bits) {

	//std::cout << "Parameterized constructor for const int called" << std::endl;
}

Fixed::Fixed(const float in_float) : _fixedPointNumber_value((int)(roundf(in_float * (1 << _nb_fractional_bits)))) {

	//std::cout << "Parameterized constructor for const float called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {

	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {

	//std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &src) {

	//std::cout << "Copy assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	_fixedPointNumber_value = src.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &src) const {

	return (_fixedPointNumber_value > src.getRawBits());
}
bool	Fixed::operator<(Fixed const &src) const {

	return (_fixedPointNumber_value < src.getRawBits());
}
bool	Fixed::operator>=(Fixed const &src) const {

	return (_fixedPointNumber_value >= src.getRawBits());
}
bool	Fixed::operator<=(Fixed const &src) const {

	return (_fixedPointNumber_value <= src.getRawBits());
}
bool	Fixed::operator==(Fixed const &src) const {

	return (_fixedPointNumber_value == src.getRawBits());
}
bool	Fixed::operator!=(Fixed const &src) const {

	return (_fixedPointNumber_value != src.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &src) const {

	Fixed	temp;

	temp.setRawBits(_fixedPointNumber_value + src.getRawBits());
	return (temp);
}

Fixed	Fixed::operator-(Fixed const &src) const {

	Fixed	temp;

	temp.setRawBits(_fixedPointNumber_value - src.getRawBits());
	return (temp);
}

Fixed	Fixed::operator*(Fixed const &src) const {

	//std::cout << "Multiplication operator called" << std::endl;
	Fixed	temp = *this;

	temp.setRawBits((_fixedPointNumber_value * src.getRawBits()) >> _nb_fractional_bits);
	return (temp);

}

Fixed	Fixed::operator/(Fixed const &src) const {

	//std::cout << "Division operator called" << std::endl;
	Fixed	temp = *this;

	temp.setRawBits((_fixedPointNumber_value << _nb_fractional_bits) / src.getRawBits());
	return (temp);
}

//preincrement
Fixed	Fixed::operator++(void) {

	Fixed	temp;

	++_fixedPointNumber_value;
	temp._fixedPointNumber_value = _fixedPointNumber_value;
	return (temp);
}

//predecrement
Fixed	Fixed::operator--(void) {

	Fixed	temp;

	--_fixedPointNumber_value;
	temp._fixedPointNumber_value = _fixedPointNumber_value;
	return (temp);
}

//postincrement
Fixed	Fixed::operator++(int) {

	Fixed	temp;

	temp._fixedPointNumber_value = _fixedPointNumber_value++;
	return (temp);
}

//postdecrement
Fixed	Fixed::operator--(int) {

	Fixed	temp;

	temp._fixedPointNumber_value = _fixedPointNumber_value--;
	return (temp);
}

int	Fixed::getRawBits(void) const {

	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointNumber_value);
}

void	Fixed::setRawBits(int const raw) {

	//std::cout << "setRawBits member function called" << std::endl;
	_fixedPointNumber_value = raw;
}

float	Fixed::toFloat(void) const {

	return ((float)_fixedPointNumber_value / (float)(1 << _nb_fractional_bits));
}

int	Fixed::toInt(void) const {

	return (_fixedPointNumber_value >> _nb_fractional_bits);
}

Fixed	&Fixed::min(Fixed &fpn1, Fixed &fpn2) {

	if (fpn1 < fpn2)
		return (fpn1);
	return (fpn2);

}
Fixed const	&Fixed::min(Fixed const &fpn1, Fixed const &fpn2) {

	if (fpn1 < fpn2)
		return (fpn1);
	return (fpn2);
}
Fixed	&Fixed::max(Fixed &fpn1, Fixed &fpn2) {

	if (fpn1 > fpn2)
		return (fpn1);
	return (fpn2);
}
Fixed const	&Fixed::max(Fixed const &fpn1, Fixed const &fpn2) {

	if (fpn1 > fpn2)
		return (fpn1);
	return (fpn2);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &src) {

	o << src.toFloat();
	return (o);
}
