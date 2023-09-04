/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:12:48 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 11:01:02 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors

Animal::Animal():
_type("Animal")
{
	std::cout << "Animal's default constructor called" << std::endl;
}

Animal::Animal(const Animal & to_cpy)
{
	std::cout << "Animal's cpy constructor called" << std::endl;
	*this = to_cpy;
}

// Destructor

Animal::~Animal()
{
	std::cout << "Animal's destructor called" << std::endl;
}

// Overload

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

// Accessor

std::string	Animal::getType(void) const
{
	return (_type);
}

// Method

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound." << std::endl;
}

