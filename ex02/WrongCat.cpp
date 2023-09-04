/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:46:01 by jholl             #+#    #+#             */
/*   Updated: 2022/05/18 12:01:21 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat's default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & to_cpy):
WrongAnimal(to_cpy)
{
	std::cout << "WrongCat's cpy constructor called" << std::endl;
}

// Destructor

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor called" << std::endl;
}

// Overload

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	WrongAnimal::operator=(rhs);
	return *this;
}

// Accessor

// Method

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound." << std::endl;
}
