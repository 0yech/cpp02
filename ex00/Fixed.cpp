/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 04:19:21 by nrey              #+#    #+#             */
/*   Updated: 2025/06/04 04:32:09 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0)
{
    std::cout << "Constructor call" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor call" << std::endl;
    this->_value = other._value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assign operation call" << std::endl;
    if (this != &other)
        this->_value = other._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor call" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits call" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits call" << std::endl;
    this->_value = raw;
}
