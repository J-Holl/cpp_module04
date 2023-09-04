/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:22:22 by jholl             #+#    #+#             */
/*   Updated: 2022/05/18 11:59:44 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::Cat(const Cat & to_cpy):
Animal(to_cpy)
{
	std::cout << "Cat's cpy constructor called" << std::endl;
}

// Destructor

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
}

// Overload

Cat & Cat::operator=(Cat const & rhs)
{
	Animal::operator=(rhs);
	return *this;
}

// Accessor

// Method

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound." << std::endl;
}
