/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:44:47 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 16:29:07 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & to_cpy)
{
	std::cout << "WrongAnimal's cpy constructor called" << std::endl;
	*this = to_cpy;
}

// Destructor

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor called" << std::endl;
}

// Overload

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

// Accessor

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

// Method

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound." << std::endl;
}

