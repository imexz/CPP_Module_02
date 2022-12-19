/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:01:13 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/29 22:44:44 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {

	private:

		int					_fixedPointNumber_value;
		static const int	_nb_fractional_bits = 8;

	public:

		Fixed(void);
		Fixed(const int in_int);
		Fixed(const float in_float);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed				&operator=(Fixed const &src);
		bool				operator>(Fixed const &src) const;
		bool				operator<(Fixed const &src) const;
		bool				operator>=(Fixed const &src) const;
		bool				operator<=(Fixed const &src) const;
		bool				operator==(Fixed const &src) const;
		bool				operator!=(Fixed const &src) const;

		Fixed				operator+(Fixed const &src) const;
		Fixed				operator-(Fixed const &src) const;
		Fixed				operator*(Fixed const &src) const;
		Fixed				operator/(Fixed const &src) const;

		Fixed				operator++(void);
		Fixed				operator--(void);
		Fixed				operator++(int);
		Fixed				operator--(int);


		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		static Fixed		&min(Fixed &fpn1, Fixed &fpn2);
		static Fixed const	&min(Fixed const &fpn1, Fixed const &fpn2);
		static Fixed		&max(Fixed &fpn1, Fixed &fpn2);
		static Fixed const	&max(Fixed const &fpn1, Fixed const &fpn2);

};

std::ostream	&operator<<(std::ostream &o, Fixed const &src);


