/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:41:06 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/30 18:57:06 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	sign(Point const &p, Point const &p1, Point const &p2) {

	return (p.getX() - p2.getX()) * (p1.getY() - p2.getY()) - (p1.getX() - p2.getX()) * (p.getY() - p2.getY());
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {

	float d1, d2, d3;
	bool has_neg, has_pos;

	std::cout << "a("<< a.getX() << "|" << a.getY() << ") ";
	std::cout << "b("<< b.getX() << "|" << b.getY() << ")";
	std::cout << "c("<< c.getX() << "|" << c.getY() << ")" << std::endl;
	std::cout << "p("<< point.getX() << "|" << point.getY() << ")" <<std::endl;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	std::cout << "d1 " << d1 << std::endl;
	std::cout << "d2 " << d2 << std::endl;
	std::cout << "d3 " << d3 << std::endl;

	has_neg = (d1 < 0.00f) || (d2 < 0.00f) || (d3 < 0.00f);
	has_pos = (d1 > 0.00f) || (d2 > 0.00f) || (d3 > 0.00f);

	return !(has_neg && has_pos);
}
