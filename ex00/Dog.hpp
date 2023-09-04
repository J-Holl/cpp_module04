/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:29:43 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 11:19:59 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog:
public Animal
{

	public:
		Dog();
		Dog(Dog const & to_cpy);
		virtual ~Dog();

		Dog & operator=(Dog const & rhs);
		void	makeSound(void) const;

	private:
};

#endif
