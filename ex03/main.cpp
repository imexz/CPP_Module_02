/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:01:18 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/30 00:04:32 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	std::cout << (bsp(Point(4,10), Point(4.04f, 2.03f), Point(10,6), Point(8.05f,6)) ? "Yes" : "No") << std::endl << std::endl;
	std::cout << (bsp(Point(0,10), Point(3,1.5f), Point(0,2), Point(4,2)) ? "Yes" : "No") << std::endl << std::endl;
	std::cout << (bsp(Point(0,10), Point(3,1.5f), Point(0,2), Point(2,4)) ? "Yes" : "No") << std::endl << std::endl;
	std::cout << (bsp(Point(5,10), Point(5,-5), Point(20,0), Point(10,0)) ? "Yes" : "No") << std::endl << std::endl;
	std::cout << (bsp(Point(20,-15), Point(0,-7), Point(20,0), Point(12.5f,-7.5f)) ? "Yes" : "No") << std::endl << std::endl;
	std::cout << (bsp(Point(20,-10), Point(0,10), Point(-10,-10), Point(0,1)) ? "Yes" : "No") << std::endl << std::endl;
	std::cout << (bsp(Point(-20,20), Point(0,10), Point(-20,-10), Point(-10,8)) ? "Yes" : "No") << std::endl << std::endl;

	return 0;
}
