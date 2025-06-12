/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 05:10:11 by nrey              #+#    #+#             */
/*   Updated: 2025/06/06 05:50:50 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float absFloat(float f)
{
	if (f < 0)
		return -f;
	else
		return f;
}

static float getArea(Point const& p1, Point const& p2, Point const& p3)
{
	return absFloat(
		(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
		p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
		p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f
	);
}

void printPoint(std::string label, const Point& p) {
	std::cout << label << " = (" << p.getX().toFloat() << ", " << p.getY().toFloat() << ")" << std::endl;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{

	float Area = getArea(a, b, c);
	float t1 = getArea(point, b, c);
	float t2 = getArea(a, point, c);
	float t3 = getArea(a, b, point);

	if (t1 == 0 || t2 == 0 || t3 == 0)
		return false;

	if ((t1 + t2 + t3) <= Area + 0.00001f)
		return true;
	else
		return false;
}