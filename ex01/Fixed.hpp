/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:01:13 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/29 13:16:31 by mstrantz         ###   ########.fr       */
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
		~Fixed();

		Fixed &	operator=(Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &src);
