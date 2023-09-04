/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:15:34 by jholl             #+#    #+#             */
/*   Updated: 2022/05/18 12:22:11 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Constructors

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "bla bla";
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(Brain const & to_cpy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = to_cpy._ideas[i];
	std::cout << "Brain's cpy constructor" << std::endl;
}

//Destructor

Brain::~Brain()
{
	std::cout << "Brain destructed" << std::endl;
}

//Operator

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}
