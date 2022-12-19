/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:01:13 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/29 11:55:26 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

	private:

		int					_fixedPointNumber_value;
		static const int	_nb_fractional_bits = 8;

	public:

		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed();

		Fixed &	operator=(Fixed const &src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
