/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 21:23:04 by nrey              #+#    #+#             */
/*   Updated: 2025/06/06 05:51:53 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	Point inside(2, 2);
	Point outside(10, 10);
	Point edge(5, 0);

	std::cout << "Test (1,1) : " << bsp(a, b, c, Point(1, 1)) << "\n";
    std::cout << "Test (3,2) : " << bsp(a, b, c, Point(3, 2)) << "\n";
    std::cout << "Test (0,0) : " << bsp(a, b, c, Point(0, 0)) << "\n";
    std::cout << "Test (10,0) : " << bsp(a, b, c, Point(10, 0)) << "\n";
    std::cout << "Test (0,10) : " << bsp(a, b, c, Point(0, 10)) << "\n";
    std::cout << "Test (5,0) : " << bsp(a, b, c, Point(5, 0)) << "\n";
    std::cout << "Test (5,5) : " << bsp(a, b, c, Point(5, 5)) << "\n";
    std::cout << "Test (0,5) : " << bsp(a, b, c, Point(0, 5)) << "\n";
    std::cout << "Test (10,10) : " << bsp(a, b, c, Point(10, 10)) << "\n";
    std::cout << "Test (-1,-1) : " << bsp(a, b, c, Point(-1, -1)) << "\n";
    std::cout << "Test (6,6) : " << bsp(a, b, c, Point(6, 6)) << "\n";
}