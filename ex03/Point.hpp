/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:40:49 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/30 00:12:29 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
	private:

		Fixed const	_x;
		Fixed const	_y;

	public:

		Point(void);
		Point(float const x, float const y);
		Point(Point const &src);
		~Point(void);

		float getX(void) const;
		float getY(void) const;
		Point	&operator=(Point const &src);

};

std::ostream	&operator<<(std::ostream &o, Point const &src);
bool bsp( Point const a, Point const b, Point const c, Point const point);
