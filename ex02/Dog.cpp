/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:29:24 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 16:26:54 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors

Dog::Dog()
{
	_brain = new Brain;
	_type = "Dog";
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::Dog(const Dog & to_cpy):
Animal(to_cpy)
{
	_brain = new Brain;
	std::cout << "Dog's cpy constructor called" << std::endl;
}

// Destructor

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
	delete _brain;
}

// Overload

Dog & Dog::operator=(Dog const & rhs)
{
	Animal::operator=(rhs);
	_brain = new Brain(*rhs._brain);
	return (*this);
}

// Accessor

// Method

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound." << std::endl;
}
